#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "\n"
#define vi vector<int> 
#define vvi vector<vector<int>>
// ----------------------------------------------------------
/*
	
*/

void solve() {
	int n; cin>>n;
	vi A(n);
	for(auto& it: A) {
		cin>>it;
	}

	int num_even = 0, num_odd = 0;
	int ind_even = -1, ind_odd = -1;
	for(int i=0; i<n; i++) {
		if(A[i]%2 == 0) {
			num_even++;
			ind_even = i+1;
		} else {
			num_odd++;
			ind_odd = i+1;
		}
	}
	if(num_even > num_odd) {
		cout<<ind_odd;
	} else {
		cout<<ind_even;
	}
}

// ----------------------------------------------------------
signed main() {
	solve();
	return 0;
}