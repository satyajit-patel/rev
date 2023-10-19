class Solution {
public:
    vector<int> dp;

    int f(int n) {
        // base case
        if(n < 0) return 0;
        if(n == 0) return 1;
        if(dp[n] != -1) return dp[n];

        // recursive case
        int oneStep = f(n-1);
        int twoStep = f(n-2);
        int ans = oneStep + twoStep;
        dp[n] = ans;
        return ans;
    }

    int climbStairs(int n) {
        dp.resize(n+1, -1);
        int ans = f(n);
        return ans;
    }
};