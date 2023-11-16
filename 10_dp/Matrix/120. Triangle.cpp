class Solution {
public:
    vector<vector<int>> tri, dp;

    int f(int i, int j) {
        // base case
        if(i >= tri.size()) return 0;
        if(dp[i][j] != -1) return dp[i][j];

        // recursive case
        int right = tri[i][j] + f(i+1, j+1);
        int down = tri[i][j] + f(i+1, j);

        // return case
        int ans = std::min(right, down);
        dp[i][j] = ans;
        return ans;
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int m = n;
        tri.clear(), tri = triangle;
        dp.resize(n+1, std::vector<int>(m+1, -1));
        return f(0, 0);
    }
};