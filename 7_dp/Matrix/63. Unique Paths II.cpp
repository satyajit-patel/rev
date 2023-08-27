class Solution {
public:
    int noEntry;
    vector<vector<int>> grid, dp;

    int f(int n, int m) {
        // base case
        if(n<0 || m<0) return 0;
        if(grid[n][m] == noEntry) return 0;
        if(n==0 && m==0) return 1;
        if(dp[n][m] != -1) return dp[n][m];

        // recursive case
        int left = f(n, m-1);
        int up = f(n-1, m);

        // return case
        int ans = left + up;
        dp[n][m] = ans;
        return ans;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        grid.clear(), grid = obstacleGrid;
        noEntry = 1;
        dp.resize(n+1, std::vector<int>(m+1, -1));
        return f(n-1, m-1);
    }
};