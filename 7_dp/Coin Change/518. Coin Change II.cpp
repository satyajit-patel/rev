class Solution {
public:
    int f(int n, int amount, vector<int>& coins, vector<vector<int>>& dp) {
        // base case
        if(n < 0) return 0;
        if(amount < 0) return 0;
        if(amount == 0) return 1;
        if(dp[n][amount] != -1) return dp[n][amount];

        // recursive case
        int incl = f(n, amount-coins[n], coins, dp);
        int excl = f(n-1, amount, coins, dp);

        // return case
        int ans = incl + excl;
        dp[n][amount] = ans;
        return ans;
    }

    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        std::vector<std::vector<int>> dp(n+1, std::vector<int>(amount+1, -1));
        return f(n-1, amount, coins, dp);
    }
};