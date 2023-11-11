#include <bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define int long long
#define endl "\n"
#define vvi vector<vector<int>>


void solve() {
	int n, m; cin>>n>>m;
	map<string, string> nm;
	while(m--) {
		string s1, s2; cin>>s1>>s2;
		string ans = "";
		if(s1.size() <= s2.size()) {
			ans += s1;
		}
		else {
			ans += s2;
		}
		nm[s1] = ans;
		nm[s2] = ans;
	}
	vector<string> a(n);
	for(auto& it: a) {
		cin>>it;
	}
	for(auto& it: a) {
		cout<<nm[it]<<" ";
	}
	cout<<endl;
}

signed main() {
	solve();
	return 0;
}
