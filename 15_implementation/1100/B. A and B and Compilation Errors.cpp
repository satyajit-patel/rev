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
		so we need <= nlogn
	*/
	int n; cin>>n;
	vi a(n), b(n-1), c(n-2);
	for(auto& it: a) {
		cin>>it;
	}
	for(auto& it: b) {
		cin>>it;
	}
	for(auto& it: c) {
		cin>>it;
	}

	vi ans;
	multiset<int> st;
	for(auto& it: a) {
		st.insert(it);
	}
	// for(auto& it: st) {
	// 	cout<<it<<" ";
	// }
	// cout<<endl;
	for(auto& it: b) {
		auto str = st.find(it);
		if(str != st.end()) {
			st.erase(str);
		}
	}
	ans.push_back(*st.begin());

	st.clear();
	for(auto& it: b) {
		st.insert(it);
	}
	// for(auto& it: st) {
	// 	cout<<it<<" ";
	// }
	for(auto& it: c) {
		// for(auto& it: st) {
		// 	cout<<it<<" ";
		// }
		// cout<<endl;
		auto str = st.find(it);
		if(str != st.end()) {
			st.erase(str);
		}
	}
	ans.push_back(*st.begin());

	for(auto& it: ans) {
		cout<<it<<endl;
	}
}
// ----------------------------------------------------------
signed main() {
	solve();
	return 0;
}