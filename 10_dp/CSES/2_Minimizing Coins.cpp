#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define vi vector<int> 
#define vvi vector<vector<int>>
// ----------------------------------------------------------
vi coin;
vi dp;

int state(int sum) {
	// base case
	if(sum < 0) {
		return 1e8;
	}
	if(sum == 0) {
		return 0;
	}
	if(dp[sum] != -1) {
		return dp[sum];
	}

	// transition
	dp[sum] = 1e8;
	for(auto& it: coin) {
		dp[sum] = min(dp[sum], 1 + state(sum-it));
	}
	return dp[sum];
}

void solve() {
	int n, x; cin>>n>>x;
	coin.resize(n);
	for(auto& it: coin) {
		cin>>it;
	}

	dp.resize(x+1, -1);
	int ans = state(x);
	if(ans >= 1e8) {
		cout<<"-1\n";
	}
	else {
		cout<<ans<<endl;
	}
}
// ----------------------------------------------------------
signed main() {
	solve();
	return 0;
}
