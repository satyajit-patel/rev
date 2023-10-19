#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi vector<int>

// -----------------------------------------------------

void solve() {
	string s; cin>>s;
	int lo = 0, up = 0;
	for(int i=0; i<s.size(); i++) {
	    if(std::islower(s[i])) {lo++;}
	    else if(std::isupper(s[i])) {up++;}
	}
	if(up > lo) {
	    string ans = "";
	    for(auto& it: s) {ans += std::toupper(it);}
	    cout<<ans<<endl;
	}
	else {
	     string ans = "";
	    for(auto& it: s) {ans += std::tolower(it);}
	    cout<<ans<<endl;
	}
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}