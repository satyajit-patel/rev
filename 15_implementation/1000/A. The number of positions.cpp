#include <bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define int long long
#define endl "\n"
#define vvi vector<vector<int>>

void solve() {
	int n, a, b; cin>>n>>a>>b;
	int ans = -1;
	if(n-a <= b) {
		ans = n-a;
	}
	else {
		ans = b+1;
	}
	cout<<ans<<endl; 
}

signed main() {
	solve();
	return 0;
}
