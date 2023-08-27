class Solution {
public:
    int dx[2] = {0, +1}; // RD
    int dy[2] = {+1, 0};
    std::vector<std::vector<int>> dp;

    bool isValid(int i, int j, int n, int m) {
        return i>=0 && j>=0 && i<n && j<m;
    }

    int f(int i, int j, int n, int m) {
        // base case
        if(i==n-1 && j==m-1) return 1;
        if(!isValid(i, j, n, m)) return 0;
        if(dp[i][j] != -1) return dp[i][j];

        // recursive case
        int ways = 0;
        for(int ind=0; ind<2; ind++) {
            int ni = i + dx[ind];
            int nj = j + dy[ind];
            ways += f(ni, nj, n, m);
        }

        // return case
        dp[i][j] = ways;
        return ways;

    }

    int uniquePaths(int m, int n) {
        dp.resize(m+1, std::vector<int>(n+1, -1));
        return f(0, 0, m, n);
    }
};