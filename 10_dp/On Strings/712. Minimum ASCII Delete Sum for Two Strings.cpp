class Solution {
public:
    std::string s1, s2;
    std::vector<std::vector<int>> dp;

    int f(int i, int j) {
        int cost = 0;
        // base case
        if(i >= s1.size()) {
            for(int x=j; x<s2.size(); x++) cost += s2[x];
            return cost;
        }
        if(j >= s2.size()) {
            for(int x=i; x<s1.size(); x++) cost += s1[x];
            return cost;
        }
        if(dp[i][j] != -1) return dp[i][j];

        // recursive case
        if(s1[i] == s2[j]) cost = f(i+1, j+1);
        else {
            int cost1 = s2[j] + f(i, j+1);
            int cost2 = s1[i] + f(i+1, j);
            cost = std::min(cost1, cost2);
        }

        // return case
        dp[i][j] = cost;
        return cost;
    }

    int minimumDeleteSum(string& _s1, string& _s2) {
        s1.clear(), s1 = _s1;
        s2.clear(), s2 = _s2;
        dp.resize(s1.size()+1, std::vector<int>(s2.size()+1, -1));
        return f(0, 0);
    }
};