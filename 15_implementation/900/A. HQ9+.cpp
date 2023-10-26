#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi vector<int>
int n, k;

// -----------------------------------------------------

void solve() {
	// int tc; cin>>tc;
	// while(tc--) {
		
	// }

	string s; cin>>s;
	if(s.find('H') != string::npos) {cout<<"YES\n";}
	else if(s.find('Q') != string::npos) {cout<<"YES\n";}
	else if(s.find('9') != string::npos) {cout<<"YES\n";}
	else cout<<"NO\n";
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}