#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "\n"
#define vi vector<int> 
#define vvi vector<vector<int>>
// ----------------------------------------------------------
/*
	we need the light on both side
*/

void solve() {
	int n, l; cin>>n>>l;
	vi a(n);
	for(auto& it: a) {
		cin>>it;
	}

	sort(a.begin(), a.end());
	int diff = 2 * max(a[0]-0, l-a[n-1]);
	for(int i=1; i<n; i++) {
		diff = max(diff, a[i]-a[i-1]);
	}
	double ans = diff/2.0;
	// printf("%.9f \n", ans);
	cout<<fixed<<setprecision(9)<<ans<<endl;
}
// ----------------------------------------------------------
signed main() {
	solve();
	return 0;
}