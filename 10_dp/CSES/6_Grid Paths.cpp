#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "\n"
#define vi vector<int> 
#define vvi vector<vector<int>>
// ----------------------------------------------------------
vector<vector<char>> grid;
vvi dp;
int mod = 1e9 + 7;
 
int state(int n, int m) {
	// base case
	if(n < 0) {
		return 0;
	}
	if(m < 0) {
		return 0;
	}
	if(grid[n][m] == '*') {
		return 0;
	}
	if(n == 0 && m == 0) {
		return 1;
	}
	if(dp[n][m] != -1) {
		return dp[n][m];
	}
 
	// transition
	// int left = state(n, m-1);
	// int up = state(n-1, m);
	// int ans = (left + up) % mod;
	// dp[n][m] = ans;
	// return ans;
	dp[n][m] = (state(n, m-1) + state(n-1, m)) % mod;
	return dp[n][m];
}
 
void solve() {
	int n; cin>>n;
	grid.resize(n, vector<char>(n));
	for(auto& row: grid) {
		for(auto& it: row) {
			cin>>it;
		}
	}
 
	dp.resize(n+1, vi(n+1, -1));
	int ans = state(n-1, n-1);
	cout<<ans<<endl;
}
// ----------------------------------------------------------
signed main() {
	solve();
	return 0;
}