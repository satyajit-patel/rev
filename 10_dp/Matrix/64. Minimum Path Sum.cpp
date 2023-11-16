class Solution {
public:
    vector<vector<int>> grid, dp;

    int f(int n, int m) {
        // base case
        if(n<0 || m<0) return 1e8;
        if(n==0 && m==0) return grid[n][m];
        if(dp[n][m] != -1) return dp[n][m];

        // recursive case
        int left = grid[n][m] + f(n, m-1);
        int up = grid[n][m] + f(n-1, m);

        // return case
        int ans = std::min(left, up);
        dp[n][m] = ans;
        return ans;
    }

    int minPathSum(vector<vector<int>>& _grid) {
        grid.clear(), grid = _grid;
        dp.resize(grid.size()+1, std::vector<int>(grid[0].size()+1, -1));
        return f(grid.size()-1, grid[0].size()-1);
    }
};