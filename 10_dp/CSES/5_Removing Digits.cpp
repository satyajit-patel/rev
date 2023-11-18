#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define vi vector<int> 
#define vvi vector<vector<int>>
// ----------------------------------------------------------
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
	int mini = INT_MAX;
	int n = sum;
	while(n) {
		int lastDigit = n % 10;
		n /= 10;
		if(lastDigit != 0) {
			mini = min(mini, 1 + state(sum - lastDigit));
		}
	}
	dp[sum] = mini;
	return mini;
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
