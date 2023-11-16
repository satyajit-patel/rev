#include <bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define int long long
#define endl "\n"
#define vvi vector<vector<int>>
// ----------------------------------------------------------
vi dp;
int mod = 1e9+7;

// state
int f(int sum) {
	// base case
	if(sum == 0) {
		return 1;
	}
	if(sum < 0) {
		return 0;
	}
	if(dp[sum] != -1) {
		return dp[sum];
	}

	// transition
	dp[sum] = 0;
	for(int i=1; i<=6; i++) {
		(dp[sum] += f(sum-i)) %= mod;
	}
	return dp[sum];
}

void solve() {
	int n; cin>>n;
	dp.resize(n+1, -1);
	int ans = f(n);
	cout<<ans<<endl;
}
// ----------------------------------------------------------
signed main() {
	solve();
	return 0;
}
