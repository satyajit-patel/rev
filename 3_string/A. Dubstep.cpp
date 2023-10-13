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
	

	// regex p("WUB");
	// cout<<regex_replace(s,p," ");

	while(1) {
		int index = s.find("WUB");
		if(index == 0) {s.erase(index, 3);}
		else if(index == s.size()-1) {s.erase(index, 3);}
		else break;
	}
	string ans = "";
	while(1) {
		// cout<<ans<<endl;
		int index = s.find("WUB");
		if(index == string::npos) {break;}
		for(int i=0; i<index; i++) {ans += s[i];}
		ans += ' ';
		s.erase(0, index+1+2);
	}
	if(!s.empty()) {ans += s;}
	cout<<ans<<endl;
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}