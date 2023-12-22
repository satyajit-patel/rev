class Solution {
public:
    int mod = 1e9+7;
    vector<int> dp;
    
    int state(int n) {
        // base case
        if(n == 0) {
            return 1;
        }
        if(n < 0) {
            return 0;
        }
        if(dp[n] != -1) {
            return dp[n];
        }
        
        // transition
        dp[n] = (state(n-1) + state(n-2))%mod;
        return dp[n];
    }

	int nthPoint(int n) {
	    dp.resize(n+1, -1);
	    int ans = state(n);
	    return ans;
	}
};