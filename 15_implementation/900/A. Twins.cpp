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

	cin>>n;
	vi a(n);
	int totSum = 0;
	for(auto& it: a) {
		cin>>it;
		totSum += it;
	}

	int equality = totSum/2;
	std::sort(a.begin(), a.end());
	std::reverse(a.begin(), a.end());
	int numCoin = 0;
	int curSum = 0;
	for(auto& it: a) {
		numCoin++;
		curSum += it;
		if(curSum > equality) break;
	}
	cout<<numCoin<<endl;
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}