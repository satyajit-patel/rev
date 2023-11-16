class Solution {
public:
    std::vector<int> dp, nums;

    int f(int n) {
        // base case
        if(n < 0) return 0;
        if(dp[n] != -1) return dp[n];

        // recursive case
        int head = nums[n] + f(n-1);
        int tail = nums[n] + f(n-2);

        // return case
        int ans = std::min(head, tail);
        dp[n] = ans;
        return ans;
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        nums.clear(), nums = cost;
        dp.resize(n+1, -1);
        int startWithStep0 = f(n-1);
        int startWithStep1 = f(n-2);
        return std::min(startWithStep0, startWithStep1);
    }
};