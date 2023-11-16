#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define vi vector<int> 
#define vvi vector<vector<int>>
// ----------------------------------------------------------

vi cost;
vi page;
vvi dp;

// state
int f(int n, int x) {
	// base case
	if(x <= 0) {
		return 0;
	}
	if(n < 0) {
		return 0;
	}
	if(dp[n][x] != -1) {
		return dp[n][x];
	}

	// transition
	dp[n][x] = f(n-1, x);
	if(x-cost[n] >= 0) {
		dp[n][x] = max(dp[n][x], page[n]+f(n-1, x-cost[n]));
	}
	return dp[n][x];

}

void solve() {
	/*
		in long long RUNTIME ERROR because :-
		1 <= n <= 1e3
		1 <= x <= 1e5 

		as LONG LONG is 8 byte
		and we know
		1e3 -> 1KB
		1e6 -> 1MB
		1e9 -> 1GB

		so space complexit would be like
		=> n * x * LONG LONG
		=> 1e8 * 8Byte
		=> 1e6 * 1e2 * 8Byte
		=> 800 MB
		which is exceding the given memor limit i.e 512 MB
		so instead we'll use INT
	*/
	int n, x; cin>>n>>x;
	cost.resize(n);
	for(auto& it: cost) {
		cin>>it;
	}
	page.resize(n);
	for(auto& it: page) {
		cin>>it;
	}

	dp.resize(n+1, vi(x+1, -1));
	int ans = f(n-1, x);
	cout<<ans;
}
// ----------------------------------------------------------
int main() {
	solve();
	return 0;
}
