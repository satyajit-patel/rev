#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void in() {
	int tc; cin>>tc;
	while(tc--) {
		int n = 8;
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				char ch; cin>>ch;
				if(ch != '.') {cout<<ch;}
			}
		}
		cout<<endl;
	}
} 

signed main() {
	in();
	return 0;
}