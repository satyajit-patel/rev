class Solution{
public:
    vector<int> dp;
    int mod = 1e9+7;

    ll state(int n) {
        // base case
        if(n == 1) {
            return 2; // 2 possibilities 0/1
        }
        if(n == 2) {
            return 3; // 3 possibilities 00/01/10
        }
        if(dp[n] != -1) {
            return dp[n];
        }
        
        // transition
        dp[n] = (state(n-1) + state(n-2)) % mod;
        return dp[n];
    }

	ll countStrings(int n) {
	    dp.resize(n+1, -1);
	    ll ans = state(n);
	    return ans;
	}
};