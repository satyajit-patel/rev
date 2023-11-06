#include <bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define int long long
#define endl "\n"


void solve() {
	int tc; cin>>tc;
	while(tc--) {
		int x, y; cin>>x>>y;
		int a, b; cin>>a>>b;

		b = std::min(b, a+a);
		if(x < y) {
			std::swap(x, y);
		}
		int ans = ((y*b)+((x-y)*a));
		cout<<ans<<endl;
	}
	
}

signed main() {
	solve();
	return 0;
}
