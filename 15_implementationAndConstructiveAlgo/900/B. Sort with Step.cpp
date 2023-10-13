#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi vector<int>
int n, k;

int f(vi& a) {
	map<int, set<int>> bucket;
	for(int i=0; i<n; i++) {
		bucket[i%k].insert(a[i]);
	}

	map<int, int> chunk;
	std::sort(a.begin(), a.end());
	for(int i=0; i<n; i++) {
		auto st = bucket[i%k];
		if(st.find(a[i]) == st.end()) {chunk[i%k]++;}
	}

	// // debug
	// for(auto& i: bucket) {
	// 	cout<<i.first<<" --> ";
	// 	for(auto& it: i.second) cout<<it<<" ";
	// 	cout<<endl;
	// }
	// for(auto& i: chunk) {
	// 	cout<<i.first<<" --> "<<i.second<<" ";
	// 	cout<<endl;
	// }

	if(chunk.empty()) {return 0;}
	int defect = 0;
	for(auto& it: chunk) {
		if(it.second == 1) {defect++;}
		else {defect += 100;}
	}
	if(defect == 2) return 1;
	return -1;
}

void solve() {
	int tc; cin>>tc;
	while(tc--) {
		cin>>n>>k;
		vi a(n);
		for(auto& it: a) cin>>it;

		int ans = f(a);
		cout<<ans<<endl;
	}
} 

signed main() {
	solve();
	return 0;
}