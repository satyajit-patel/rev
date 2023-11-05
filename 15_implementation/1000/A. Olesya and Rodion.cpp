#include <bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define int long long
#define endl "\n"

void solve() {
	// (1 ≤ n ≤ 100, 2 ≤ t ≤ 10)
	int n, t; cin>>n>>t;

	string ans = "";
	if(t < 10) {
		for(int i=0; i<n; i++) {
			ans += std::to_string(t);
		}
	}
	else if(t == 10) {
		if(n > 1) {
			for(int i=0; i<n; i++) {
				if(i == 0) {
					ans += "1";
				}
				else {
					ans += "0";
				}
			}
		}
		else {
			cout<<"-1\n";
			return;
		}
	}
	cout<<ans<<endl;
}

signed main() {
	solve();
	return 0;
}
