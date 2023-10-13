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
	string team1 = "0000000";
	string team2 = "1111111";

	if(s.find(team1) != string::npos) cout<<"YES\n";
	else if(s.find(team2) != string::npos) cout<<"YES\n";
	else cout<<"NO\n";
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}