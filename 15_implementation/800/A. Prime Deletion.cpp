#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void in() {
	int tc; cin>>tc;
	while(tc--) {
		string s; cin>>s;

		if(s.find('1') < s.find('3')) cout<<13<<endl;
		else cout<<31<<endl;
	}
} 

signed main() {
	in();
	return 0;
}