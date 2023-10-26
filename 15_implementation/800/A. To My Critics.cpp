#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void in() {
	int tc; cin>>tc;
	while(tc--) {
		int a, b, c; cin>>a>>b>>c;
		int tot = a + b+ c;
		int mini = std::min({a, b, c});
		cout<<((tot-mini >= 10) ? "YES\n" : "NO\n");
	}
} 

signed main() {
	in();
	return 0;
}