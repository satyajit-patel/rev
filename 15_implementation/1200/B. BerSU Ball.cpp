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

bool differByAtmostOne(int a, int b) {
	int x = abs(a-b);
	return x <= 1;
}

void solve() {
	// 1 <= n <= 1e2
	// O(n^4)
	int n; cin>>n;
	vi A(n);
	for(auto& it: A) {
		cin>>it;
	}
	int m; cin>>m;
	vi B(m);
	for(auto& it: B) {
		cin>>it;
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	int ans = 0;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(differByAtmostOne(A[i], B[j])) {
				ans++;
				B[j] = -1e9;
				break;
			}
		}
	}
	cout<<ans;
}
// ----------------------------------------------------------
signed main() {
	solve();
	return 0;
}