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

	cin>>n>>k;

	// // MLE
	// vi a;
	// a.push_back(-1);
	// for(int i=1; i<=n; i+=2) {a.push_back(i);}
	// for(int i=2; i<=n; i+=2) {a.push_back(i);}
	// cout<<a[k]<<endl;

	// // MLE
	// string a = "";
	// a.push_back(-1);
	// for(int i=1; i<=n; i+=2) {a.push_back(i + '0');}
	// for(int i=2; i<=n; i+=2) {a.push_back(i + '0');}
	// cout<<a[k]<<endl;

	int half = (n+1)/2;
	int ans = INT_MIN;
	if(k <= half) {ans = (k*2)-1;}
	else {ans = (k-half)*2;}
	cout<<ans<<endl;
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}