#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "\n"
#define vi vector<int> 
#define vvi vector<vector<int>>
// ----------------------------------------------------------
/*
	
*/

vector<int> A;
vector<vector<int>> dp;

int state(int i, int j) {
	// base case
	if(j-i+1 == 1) {
		return A[i];
	}
	if(j-i+1 == 2) {
		return max(A[i], A[j]);
	}
	if(dp[i][j] != -1) {
		return dp[i][j];
	}

	// transition
	int pickFirst = A[i] + min(state(i+2, j), state(i+1, j-1));
	int pickLast = A[j] + min(state(i+1, j-1), state(i, j-2));
	int ans = max(pickFirst, pickLast);
	dp[i][j] = ans;
	return ans;
}

void solve() {
	int n; cin>>n;
	A.resize(n);
	for(auto& it: A) {
		cin>>it;
	}

	dp.resize(n+1, vector<int>(n+1, -1));
	int ans = state(0, n-1);
	cout<<ans;
}

// ----------------------------------------------------------
signed main() {
	solve();
	return 0;
}