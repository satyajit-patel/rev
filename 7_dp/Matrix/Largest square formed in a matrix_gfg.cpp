class Solution {
public:
    int maxi;
    vector<vector<int>> dp;
    vector<vector<int>> grid;

    bool isValid(int i, int j) {
        return i>=0 && i<grid.size() && j>=0 && j<grid[0].size();
    }
    
    int f(int i, int j) {
        // base case
        if(!isValid(i, j)) return 0;
        if(dp[i][j] != -1) return dp[i][j];

        // recursive case
        int right = f(i, j+1);
        int down = f(i+1, j);
        int digonal = f(i+1, j+1);

        // return case
        if(grid[i][j] == 1) {
            int ans = 1 + std::min(right, std::min(down, digonal));
            maxi = std::max(maxi, ans);
            dp[i][j] = ans;
            return ans;
        }
        else return dp[i][j] = 0;
    }

    int maxSquare(int n, int m, vector<vector<int>> mat) {
        grid.clear(), grid = mat;
        maxi = 0;
        dp.resize(n+1, std::vector<int>(m+1, -1));
        f(0, 0);
        return maxi;
    }
};