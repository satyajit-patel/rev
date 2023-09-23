#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int f(vector<int>& a, int n) {
	std::sort(a.begin(), a.end());
	int prod = 1;
	a[0] = a[0] + 1;
	for(auto& it:a) prod *= it;
	return prod;
}

void in() {
	int tc; cin>>tc;
	while(tc--) {
		int n; cin>>n;
		vector<int> a(n);
		for(auto& it:a) cin>>it;
		int ans = f(a, n);
		cout<<ans<<endl;
	}
} 

signed main() {
	in();
	return 0;
}