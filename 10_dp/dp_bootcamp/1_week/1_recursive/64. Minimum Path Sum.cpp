class Solution {
public:
    vector<vector<int>> dp;
    vector<vector<int>> grid;

    // state
    int f(int n, int m) {
        // base case
        if(n < 0) {
            return 1e8;
        }
        if(m < 0) {
            return 1e8;
        }
        if(n == 0 && m == 0) {
            return grid[n][m];
        }
        if(dp[n][m] != -1) {
            return dp[n][m];
        }

        // transition
        dp[n][m] = grid[n][m];
        dp[n][m] += std::min(f(n-1, m), f(n, m-1));
        return dp[n][m];
    }

    int minPathSum(vector<vector<int>>& _grid) {
        grid.clear(), grid = _grid;
        int n = grid.size();
        int m = grid[0].size();
        dp.resize(n+1, vector<int>(m+1, -1));
        int ans = f(n-1, m-1);
        return ans;
    }
};