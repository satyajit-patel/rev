#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"


vector<int> f(vector<int>& a, vector<int>& b, int n) {
	multimap<int, int> hm;
	for(int i=0; i<n; i++) hm.insert({a[i], i});

	std::sort(a.begin(), a.end());
	std::sort(b.begin(), b.end());

	vector<int> ans(n);
	for(int i=0; i<n; i++) {
		auto it = hm.find(a[i]);
		ans[it->second] = b[i];
		hm.erase(hm.find(a[i]));
	}
	return ans;
}

void in() {
	int tc; cin>>tc;
	while(tc--) {
		int n, k; cin>>n>>k;
		vector<int> a(n), b(n);
		for(int i=0; i<n; i++) cin>>a[i];
		for(int i=0; i<n; i++) cin>>b[i];

		vector<int> ans = f(a, b, n);
		for(int i=0; i<n; i++) cout<<ans[i]<<" ";
		cout<<endl;
	}
} 

signed main() {
	in();
	return 0;
}