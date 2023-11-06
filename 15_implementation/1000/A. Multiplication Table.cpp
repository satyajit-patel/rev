#include <bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define int long long
#define endl "\n"
#define vvi vector<vector<int>>


void solve() {
	int n, x; cin>>n>>x;
	// (1 ≤ n ≤ 10^5, 1 ≤ x ≤ 10^9)

	// // N^2 (10^10) TLE
	// vvi grid;
	// map<int, int> nm;
	// int y = 1;
	// for(int i=0; i<n; i++) {
	// 	int z = y;
	// 	vi temp;
	// 	for(int j=0; j<n; j++) {
	// 		temp.push_back(z);
	// 		nm[z]++;
	// 		// cout<<z<<" ";
	// 		z += y;
	// 	}
	// 	// cout<<endl;
	// 	grid.push_back(temp);
	// 	y++;
	// }
	// auto it = nm.find(x);
	// if(it == nm.end()) {
	// 	cout<<0<<endl;
	// 	return;
	// }
	// cout<<it->second<<endl;

	// O(N)
	int ans = 0;
	for(int i=1; i<=n; i++) {
		if((x%i == 0) && (x/i <= n)) {
			ans++;
		}
	}
	cout<<ans<<endl;
}

signed main() {
	solve();
	return 0;
}
