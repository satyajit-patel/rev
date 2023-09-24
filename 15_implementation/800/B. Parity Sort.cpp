#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

bool f(vector<int>& a, int n) {
	vector<int> b = a;
	std::sort(b.begin(), b.end());
	for(int i=0; i<n; i++) {
		int a_parity = a[i] % 2;
		int b_parity = b[i] % 2;
		if(a_parity != b_parity) return false;
	}
	return true;
}

void in() {
	int tc; cin>>tc;
	while(tc--) {
		int n; cin>>n;
		vector<int> a(n);
		for(auto& it:a) cin>>it;

		cout<<(f(a, n) ? "YES" : "NO")<<endl;
	}
} 

signed main() {
	in();
	return 0;
}