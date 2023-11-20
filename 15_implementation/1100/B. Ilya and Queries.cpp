#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "\n"
#define vi vector<int> 
#define vvi vector<vector<int>>
// ----------------------------------------------------------
void solve() {
	/*
		1 <= n <= 1e5
		1 <= m <= 1e5

		so must be with in N^2
	*/
	string s; cin>>s;

	int n = s.size();
	vi prefix(n, 0);
	for(int i=1; i<n; i++) {
		if(s[i-1] == s[i]) {
			prefix[i]++;
		}
		prefix[i] = prefix[i] + prefix[i-1];
	}
	// for(auto& it: prefix) {
	// 	cout<<it<<" ";
	// }

	int m; cin>>m;
	vi ans;
	while(m--) {
		int l, r; cin>>l>>r;
		// expecting 1 based indexing
		ans.push_back(prefix[r-1] - prefix[l-1]);
	}

	for(auto& it: ans) {
		cout<<it<<endl;
	}
}
// ----------------------------------------------------------
signed main() {
	solve();
	return 0;
}