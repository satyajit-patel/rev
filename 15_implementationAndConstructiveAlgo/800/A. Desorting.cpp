#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void in() {
	int tc; cin>>tc;
	while(tc--) {
		int n; cin>>n;
		vector<int> a(n);
		for(auto& it:a) cin>>it;

		int ans = 0;
		if(std::is_sorted(a.begin(), a.end())) {
			int mini = INT_MAX;
			int y, x;
			for(int i=1; i<n; i++) {
				int diff = a[i]-a[i-1];
				if(diff < mini) {
					mini = diff;
					y = a[i];
					x = a[i-1];
				}
			}
			ans = ((y-x)/2)+1;
			cout<<ans<<endl;
		}
		else cout<<ans<<endl;
	}
} 

signed main() {
	in();
	return 0;
}