class Solution {
public:
    vector<int> dp;

    // state
    int f(int n) {
        // base case
        if(n == 0) {
            return 0;
        }
        if(n == 1) {
            return 1;
        }
        if(dp[n] != -1) {
            return dp[n];
        }

        // transition
        dp[n] = f(n-1) + f(n-2);
        return dp[n];
    }

    int fib(int n) {
        dp.resize(n+1, -1);
        int ans = f(n);
        return ans;
    }
};