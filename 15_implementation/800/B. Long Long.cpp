#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int f(int* a, int n) {
	int hmm = 0;
	int prevParity = 0;
	for(int i=0; i<n; i++) {
		if(a[i] == 0) continue;
		int curParity = (a[i] < 0) ? 1 : 0;
		// cout<<"prev "<<prevParity<<" , cur "<<curParity<<endl;
		if((curParity != prevParity) && (a[i] < 0)) {
			hmm++;
			prevParity = 1;
		}
		else if(a[i] > 0) prevParity = 0;
	}
	return hmm;
}

void in() {
	int tc; cin>>tc;
	while(tc--) {
		int n; cin>>n;
		int a[n], sum = 0;
		for(int i=0; i<n; i++) {
			cin>>a[i];
			sum += std::abs(a[i]);
		}

		int ans = f(a, n);
		cout<<sum<<" "<<ans<<endl;
	}
} 

signed main() {
	in();
	return 0;
}