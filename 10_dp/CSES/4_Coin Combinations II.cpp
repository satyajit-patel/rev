#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define vi vector<int> 
#define vvi vector<vector<int>>
// ----------------------------------------------------------
vi coins;
vvi dp;
int mod = 1e9 + 7;

int state(int n, int sum) {
	// base case
	if(n < 0) {
		return 0;
	}
	if(sum < 0) {
		return 0;
	}
	if(sum == 0) {
		return 1;
	}
	if(dp[n][sum] != -1) {
		return dp[n][sum];
	}

	// transition
	int skip = state(n-1, sum);
	int pick = 0;
	if(sum - coins[n] >= 0) {
		pick = pick + state(n, sum-coins[n]);
	}
	int ans = (pick + skip) % mod;
	dp[n][sum] = ans;
	return ans;
}

void solve() {
	int n, x; cin>>n>>x;
	coins.resize(n);
	for(auto& it: coins) {
		cin>>it;
	}

	dp.resize(n+1, vi(x+1, -1));
	int ans = state(n-1, x);
	cout<<ans<<endl;
}
// ----------------------------------------------------------
signed main() {
	solve();
	return 0;
}
