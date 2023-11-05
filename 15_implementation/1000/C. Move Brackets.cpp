#include <bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define int long long
#define endl "\n"

void solve() {
	int tc; cin>>tc;
	while(tc--) {
		int n; cin>>n; 
		string s; cin>>s;

		int num_open_bracket = 0;
		for(int i=0; i<n; i++) {
			if(s[i] == '(') {
				num_open_bracket++;
			}
			else {
				num_open_bracket--;
			}
			if(num_open_bracket < 0) {
				num_open_bracket = 0;
			}
		}
		cout<<num_open_bracket<<endl;
	}
}

signed main() {
	solve();
	return 0;
}
