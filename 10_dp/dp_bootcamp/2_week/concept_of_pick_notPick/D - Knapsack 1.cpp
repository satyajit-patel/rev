#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define vi vector<int> 
#define vvi vector<vector<int>>
// ----------------------------------------------------------

vi wt;
vi vl;
vvi dp;

int state(int n, int w) {
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
	dp[n][w] = state(n-1, w);
	if(w-wt[n] >= 0) {
		dp[n][w] = max(dp[n][w], vl[n] + state(n-1, w-wt[n]));
	}
	return dp[n][w];
}

void solve() {
	int n, w; cin>>n>>w;
	wt.resize(n);
	vl.resize(n);
	for(int i=0; i<n; i++) {
		cin>>wt[i]>>vl[i];
	}

	dp.resize(n+1, vi(w+1, -1));
	int ans = state(n-1, w);
	cout<<ans<<endl;
}
// ----------------------------------------------------------
signed main() {
	solve();
	return 0;
}
