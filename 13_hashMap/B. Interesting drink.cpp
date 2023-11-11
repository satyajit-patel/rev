#include <bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define int long long
#define endl "\n"
#define vvi vector<vector<int>>
// ----------------------------------------------------------
void solve() {
	/*
		3 10 8 6 11

		nm[3] = 1
		nm[6] = 1
		nm[8] = 1
		nm[10] = 1
		nm[11] = 1

		// prefix map
		nm[3] = 1
		nm[6] = 2
		nm[8] = 3
		nm[10] = 4
		nm[11] = 5
	*/
	int n; cin>>n;
	vi a(n);
	map<int, int> nm;
	for(auto& it: a) {
		cin>>it;
		nm[it]++;
	}
	int sum = 0;
	for(auto& it: nm) {
		int ele = it.first;
		int freq = it.second;
		sum += freq;
		nm[ele] = sum;
	}
	int m; cin>>m;
	vi b(m);
	for(auto& it: b) {
		cin>>it;
	}
	// for(auto& it: nm) {
	// 	cout<<it.first<<" "<<it.second<<endl;
	// }

	vi ans;
	for(int i=0; i<m; i++) {
		auto it = nm.upper_bound(b[i]);
		if(it == nm.begin()) {
			ans.push_back(0);
		}
		else {
			it--;
			ans.push_back(it->second);
		}
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
