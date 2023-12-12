// https://www.geeksforgeeks.org/problems/gold-mine-problem2608/1
class Solution{
public:
    vector<vector<int>> grid, dp;
    
    bool isvalid(int i, int j, int n, int m) {
        return i>=0 && i<n && j>=0 && j<m;
    }
    
    int state(int i, int j, int n, int m) {
        // base case
        if(!isvalid(i, j, n, m)) {
            return 0;
        }
        if(dp[i][j] != -1) {
            return dp[i][j];
        }
        
        // transition
        int digRightUp = grid[i][j] + state(i-1, j+1, n, m);
        int right = grid[i][j] + state(i, j+1, n, m);
        int digRightDown = grid[i][j] + state(i+1, j+1, n, m);
        int ans = max({digRightUp, right, digRightDown});
        dp[i][j] = ans;
        return ans;
    }

    int maxGold(int n, int m, vector<vector<int>> M) {
        grid.clear(), grid = M;
        dp.resize(n+1, vector<int>(m+1, -1));
        int ans = INT_MIN;
        for(int i=0; i<n; i++) {
            ans = max(ans, state(i, 0, n, m));
        }
        return ans;
    }
};