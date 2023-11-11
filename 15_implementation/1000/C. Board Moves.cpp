#include <bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define int long long
#define endl "\n"
#define vvi vector<vector<int>>

void solve() {
	int tc; cin>>tc;
	while(tc--) {
		int n; cin>>n;
		
		int ans = 0;
		for(int i=1; i<=n/2; i++) {
			ans += (i * i);
		}
		ans = ans * 8;
		cout<<ans<<endl;
	}
}

signed main() {
	solve();
	return 0;
}