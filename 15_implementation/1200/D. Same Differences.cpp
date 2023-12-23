#include <bits/stdc++.h>
using namespace std;
 
#define int long long
// #define ll long long
#define endl "\n"
#define vi vector<int> 
#define vvi vector<vector<int>>
// ----------------------------------------------------------
/*
	Aj − Ai = j − i

	=> Aj - j = A[i] - i
	=> A[i]-i = A[j]-j
*/

void solve() {
	int tc; cin>>tc;
	while(tc--) {
		int n; cin>>n;
		vi A(n);
		for(auto& it: A) {
			cin>>it;
		}

		int ans = 0;
		map<int, int> map;
		for(int i=0; i<n; i++) {
			if(map.count(A[i]-i)) {
				ans += map[A[i]-i];
			}
			map[A[i]-i]++;
		}
		cout<<ans<<endl;
	}
}

// ----------------------------------------------------------
signed main() {
	solve();
	return 0;
}