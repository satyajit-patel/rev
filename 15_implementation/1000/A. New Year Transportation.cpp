#include <bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define int long long
#define endl "\n"

signed main() {
	// one can travel from cell i to cell (i + ai)
	int n, destination; cin>>n>>destination;
	vi a(n-1);
	for(auto& it: a) {
		cin>>it;
	}

	// given 1 based indexing
	int index = 1;
	while(index < destination) {
		int next = index + a[index-1];
		index = next;
	}
	if(index == destination) {
		cout<<"YES\n";
	}
	else {
		cout<<"NO\n";
	}
}
