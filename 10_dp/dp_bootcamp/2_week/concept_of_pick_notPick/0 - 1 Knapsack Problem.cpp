class Solution {
public:
    int dp[1000+1][1000+1];
    
    int state(int n, int w, int* wt, int* vl) {
        // base case
        if(w <= 0) {
            return 0;
        }
        if(n < 0) {
            return 0;
        }
        if(dp[n][w] != -1) {
            return dp[n][w];
        }
        
        // transition
        dp[n][w] = state(n-1, w, wt, vl);
        if(w-wt[n] >= 0) {
            dp[n][w] = max(dp[n][w], vl[n] + state(n-1, w-wt[n], wt, vl));
        }
        return dp[n][w];
    }

    int knapSack(int W, int wt[], int val[], int n) {
        memset(dp, -1, sizeof dp);
        int ans = state(n-1, W, wt, val);
        return ans;
    }
};