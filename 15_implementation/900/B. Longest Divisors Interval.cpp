#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void in() {
	int tc; cin>>tc;
	while(tc--) {
		int n; cin>>n;
		if(n&1) cout<<1<<endl;
		else {
			int ans = 0;
			for(int i=1; i<=n; i++) {
				if(n % i == 0) ans++;
				else break;
			}
			cout<<ans<<endl;
		}
	}
} 

signed main() {
	in();
	return 0;
}