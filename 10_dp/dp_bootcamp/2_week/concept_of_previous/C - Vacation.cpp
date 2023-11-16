#include <bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define int long long
#define endl "\n"
#define vvi vector<vector<int>>
// ----------------------------------------------------------

vvi grid;
vvi dp;

// state
int f(int n, int i) {
	// base case
	if(n == 0) {
		return grid[n][i];
	}
	if(dp[n][i] != -1) {
		return dp[n][i];
	}

	// transition
	dp[n][i] = grid[n][i];
	if(i == 2) {
		dp[n][i] += max(f(n-1, 0), f(n-1, 1));
	}
	else if(i == 1) {
		dp[n][i] += max(f(n-1, 0), f(n-1, 2));
	}
	else {
		dp[n][i] += max(f(n-1, 1), f(n-1, 2));
	}
	return dp[n][i];
}

void solve() {
	int n; cin>>n;
	grid.resize(n, vector<int>(3));
	for(int i=0; i<n; i++) {
		cin>>grid[i][0]>>grid[i][1]>>grid[i][2];
	}

	dp.resize(n, vector<int>(3, -1));
	int ans = max({f(n-1, 0), f(n-1, 1), f(n-1, 2)});
	cout<<ans<<endl;
}
// ----------------------------------------------------------
signed main() {
	solve();
	return 0;
}
