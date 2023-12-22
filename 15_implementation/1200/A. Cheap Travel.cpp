#include <bits/stdc++.h>
using namespace std;
 
// #define int long long
// #define ll long long
#define endl "\n"
#define vi vector<int> 
#define vvi vector<vector<int>>
// ----------------------------------------------------------
/*
	
*/


void solve() {
	int n,m,a,b; cin>>n>>m>>a>>b;

	if(n <= m) {
		int singleRide = (n*a);
		int specialRide = b;
		cout<<min(singleRide, specialRide);
	}
	else {
		int singleRide = (n*a);
		int specialRide = (n/m)*b + min(n%m*a, b);
		cout<<min(singleRide, specialRide);
	}
}
// ----------------------------------------------------------
signed main() {
	solve();
	return 0;
}