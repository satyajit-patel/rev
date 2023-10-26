#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"


void in() {
	int tc; cin>>tc;
	while(tc--) {
		int n; cin>>n;
		string s; cin>>s;

		int ans = 1, cur = 1;
		for(int i=1; i<n; i++) {
			if(s[i] != s[i-1]) cur = 1;
			else cur++;
			ans = std::max(ans, cur);
		}
		cout<<ans+1<<endl;
	}
} 

signed main() {
	in();
	return 0;
}