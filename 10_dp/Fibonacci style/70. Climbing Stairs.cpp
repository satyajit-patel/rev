class Solution {
public:
    std::vector<int> dp;

    int f(int n) {
        // base case
        if(n == 0) return 1;
        if(n < 0) return 0;
        if(dp[n] != -1) return dp[n];

        // recursive case
        int step1 = f(n-1);
        int step2 = f(n-2);

        // return case
        int ways = step1 + step2;
        dp[n] = ways;
        return ways;
    }

    int climbStairs(int n) {
        dp.resize(n+1, -1);
        return f(n);
    }
};