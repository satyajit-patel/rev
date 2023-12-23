#include <bits/stdc++.h>
using namespace std;
 
#define int long long
// #define ll long long
#define endl "\n"
#define vi vector<int> 
#define vvi vector<vector<int>>
// ----------------------------------------------------------
/*
	
*/

void solve() {
	int n; cin>>n;
	int x = 1;
	int tot = 1e6+1;
	vector<int> A(tot);
	for(int group=1; group<=n; group++) {
		int num; cin>>num;
		while(num--) {
			A[x] = group;
			x++;
		}
	}
	int m; cin>>m;
	while(m--) {
		int x; cin>>x;
		cout<<A[x]<<endl;
	}
}

// ----------------------------------------------------------
signed main() {
	solve();
	return 0;
}