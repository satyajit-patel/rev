#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define vi vector<int> 
#define vvi vector<vector<int>>
// ----------------------------------------------------------
vi price;
vi pages;
vvi dp;

int state(int n, int sum) {
	// base 
	if(n < 0) {
		return 0;
	}
	if(sum <= 0) {
		return 0;
	}
	if(dp[n][sum] != -1) {
		return dp[n][sum];
	}

	// transition
	dp[n][sum] = state(n-1, sum);
	if(sum - price[n] >= 0) {
		dp[n][sum] = max(dp[n][sum], pages[n] + state(n-1, sum-price[n]));
	}
	return dp[n][sum];
}

void solve() {
	int n, x; cin>>n>>x;
	price.resize(n);
	for(auto& it: price) {
		cin>>it;
	}
	pages.resize(n);
	for(auto& it: pages) {
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
