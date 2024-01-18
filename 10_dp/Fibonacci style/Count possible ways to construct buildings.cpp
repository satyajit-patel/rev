class Solution {
public:
    int mod = 1e9 + 7;
    vector<int> dp;

    long long state(int N) {
        // base case
        if(N <= 0) {
            return 1;
        }
        if(dp[N] != -1) {
            return dp[N];
        }
        
        // transition
        long long ans = (state(N-2) + state(N-1)) % mod;
        dp[N] = ans;
        return ans;
    }

	int TotalWays(int N) {
	    dp.resize(N+1, -1);
	    long long ans = state(N);
	    ans = (ans * ans) % mod;
	    return ans;
	}
};