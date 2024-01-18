class Solution {
public:
    vector<pair<int, int>> limit;
    int gardenLastPoint;
    // vector<vector<int>> dp; // MLE dp[1e4][1e4] vector will not hold
    map<pair<int, int>, int> dp;

    int state(int i, int lastTapRange) {
        // base case
        if(i >= limit.size()) {
            if(lastTapRange >= gardenLastPoint) {
                return 0;
            } else {
                return 1e9;
            }
        }
        if(limit[i].first > lastTapRange) {
            return 1e9;
        }
        // if(dp[i][lastTapRange] != -1) {
        //     return dp[i][lastTapRange];
        // }
        if(dp.count({i, lastTapRange})) {
            return dp[{i, lastTapRange}];
        }

        // transition
        int openTap = 1 + state(i+1, max(lastTapRange, limit[i].second));
        int notOpenTap = state(i+1, lastTapRange);
        int ans = min(openTap, notOpenTap);
        // dp[i][lastTapRange] = ans;
        dp[{i, lastTapRange}] = ans;
        return ans;
    }

    int minTaps(int n, vector<int>& ranges) {
        gardenLastPoint = n;
        for(int i=0; i<ranges.size(); i++) {
            int lo = max(0, i-ranges[i]);
            int hi = min(gardenLastPoint, i+ranges[i]);
            limit.push_back({lo, hi});
        }
        sort(limit.begin(), limit.end());

        // dp.resize(ranges.size()+1, vector<int>(ranges.size()+1, -1));
        int ans = state(0, 0);
        return (ans >= 1e9) ? -1 : ans;
    }
};