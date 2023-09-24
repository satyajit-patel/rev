#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

// O(n)
bool f(int mid, vector<int>& a, int n, int x) {
	int water = 0;
	for(int i=0; i<n; i++) {
		if(a[i] > mid) continue;
		water += (mid - a[i]);
	}
	return water <= x;
}


// O(logn)
int bs(vector<int>& a, int n, int x, int L, int H) {
	while(H-L >= 2) {
		int mid = (L+H)/2 ;
		f(mid, a, n, x) ? L = mid : H = mid;
	}
	return L;
}

void in() {
	int tc; cin>>tc;
	while(tc--) {
		int n, x; cin>>n>>x;
		vector<int> a(n);
		for(int i=0; i<n; i++) cin>>a[i];

		int water = bs(a, n, x, -1, 1e10);
		cout<<water<<endl;
	}

} 

signed main() {
	in();
	return 0;
}