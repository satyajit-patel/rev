#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "\n"
#define vi vector<int> 
#define vvi vector<vector<int>>
// ----------------------------------------------------------
/*
	
*/

void solve() {
	map<string, int> map;
	int n; cin>>n;
	while(n--) {
		string s; cin>>s;
		if(!map.count(s)) {
			cout<<"OK\n";
		} else {
			string temp = s + to_string(map[s]);
			cout<<temp<<endl;
		}
		map[s]++;
	}
}

// ----------------------------------------------------------
signed main() {
	solve();
	return 0;
}