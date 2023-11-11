#include <bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define int long long
#define endl "\n"
#define vvi vector<vector<int>>
// ----------------------------------------------------------
void solve() {
	int n; cin>>n;
	vector<pair<int, int>> a(n);
	for(int i=0; i<n; i++) {
		cin>>a[i].first>>a[i].second;
	}

	std::sort(a.begin(), a.end());
	for(int i=0; i<n-1; i++) {
		if(a[i].second > a[i+1].second) {
			cout<<"Happy Alex\n";
			return;
		}
	}
	cout<<"Poor Alex\n";
}
// ----------------------------------------------------------
signed main() {
	solve();
	return 0;
}
