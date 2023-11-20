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
	int n, m; cin>>n>>m;
	vi nums(n);
	for(auto& it: nums) {
		cin>>it;
	}
	vi query(m);
	for(auto& it: query) {
		cin>>it;
	}

	vi prefix;
	set<int> st;
	for(int i=n-1; i>=0; i--) {
		// N * logN
		if(st.find(nums[i]) == st.end()) {
			st.insert(nums[i]);
		}
		prefix.push_back(st.size());
	}
	reverse(prefix.begin(), prefix.end());
	// for(auto& it: prefix) {
	// 	cout<<it<<" ";
	// }
	vi ans;
	for(auto& it: query) {
		// given 1 based indexing
		ans.push_back(prefix[it-1]);
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