#include <bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define int long long
#define endl "\n"
#define vvi vector<vector<int>>

void solve() {
	int tc; cin>>tc;
	while(tc--) {
		int a, b; cin>>a>>b;

		if(b == 1) {
			cout<<"NO\n";
		}
		else {
			cout<<"YES\n";
			cout<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
		}
	}
}

signed main() {
	solve();
	return 0;
}
