#include <bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define int long long
#define endl "\n"
#define vvi vector<vector<int>>
// ----------------------------------------------------------

string s1, s2;
vvi dp;

// state
int f(int n, int m) {
	// base case
	if(n == 0) {
		return m;
	}
	if(m == 0) {
		return n;
	}
	if(dp[n][m] != -1) {
		return dp[n][m];
	}

	// transition
	dp[n][m] = 1e8;
	if(s1[n-1] == s2[m-1]) {
		dp[n][m] = f(n-1, m-1);
	}
	dp[n][m] = min(dp[n][m], 1+min({f(n, m-1), f(n-1, m), f(n-1, m-1)}));
	return dp[n][m];
}

void solve() {
	cin>>s1>>s2;
	int n = s1.size();
	int m = s2.size();
	dp.resize(n+1, vector<int>(m+1, -1));
	int ans = f(n, m);
	cout<<ans<<endl;
}
// ----------------------------------------------------------
signed main() {
	solve();
	return 0;
}
