#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define vi vector<int> 
#define vvi vector<vector<int>>
// ----------------------------------------------------------

vi dp;
int mod = 1e9+7;

int state(int sum) {
	// base case
	if(sum < 0) {
		return 0;
	}
	if(sum == 0) {
		return 1;
	}
	if(dp[sum] != -1) {
		return dp[sum];
	}

	// transition
	dp[sum] = 0;
	for(int dice=1; dice<=6; dice++) {
		dp[sum] = (dp[sum] + state(sum-dice))%mod;
	}
	return dp[sum];
}

void solve() {
	int n; cin>>n;

	dp.resize(n+1, -1);
	int ans = state(n);
	cout<<ans<<endl;
}
// ----------------------------------------------------------
signed main() {
	solve();
	return 0;
}
