#include <bits/stdc++.h>
using namespace std;
 
#define int long long
// #define ll long long
#define endl "\n"
#define vi vector<int> 
#define vvi vector<vector<int>>
// ----------------------------------------------------------
/*
	
*/

void solve() {
	string s; cin>>s;

	for(int i=0; i<s.size(); i++) {
		if(i==0 && s[i]=='9') {
			continue;
		}
		if(s[i] >= '5') {
			int x = s[i] - '0'; // char to int
			x = 9 - x;
			s[i] = x + '0'; // int to char
		}
	}
	cout<<s;
}

// ----------------------------------------------------------
signed main() {
	solve();
	return 0;
}