#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi vector<int>

// -----------------------------------------------------

int f(string& s, int n) {
    int hmm = 0;
    for(int i=0; i<n-1; i++) {
        if((hmm%2) == 0) {
            if((s[i]=='1') && (s[i+1]=='0')) {hmm++;}
        }
        else {
            if((s[i]=='0') && (s[i+1]=='1')) {hmm++;}
        }
    }
    if((hmm%2) != 0) {
        if(s[n-1] == '1') {hmm++;}
    }
    else if(hmm != 0) {
        if(s[n-1] == '0') {hmm++;}
    }
    return hmm;
}

void solve() {
	int tc; cin>>tc;
	while(tc--) {
	    int n; cin>>n;
	    string s; cin>>s;
	    
	    int ans = f(s, n);
	    cout<<ans<<endl;
	}
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}