#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"


void in() {
	int tc; cin>>tc;
	while(tc--) {
		string s; cin>>s;
		
		int n = s.size(); 

		// ()()()()
		string a = "(";
		while(a.size() < 2*n) {
			if(a.back() == '(') a += ')';
			else a += '(';
		}

		// (((())))
		string b = "";
		while(b.size() < n) b += '(';
		while(b.size() < 2*n) b += ')';

		if(a.find(s) == string::npos) cout<<"YES\n"<<a<<endl;
		else if(b.find(s) == string::npos) cout<<"YES\n"<<b<<endl;
		else cout<<"NO\n";
	}
} 

signed main() {
	in();
	return 0;
}