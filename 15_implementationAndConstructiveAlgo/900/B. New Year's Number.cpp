#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi vector<int>
#define vvi vector<vector<int>>

// -----------------------------------------------------

bool f(int n) {
    while((n%2020) != 0) {
        if((n%2021) == 0) {return true;}
        n -= 2021;
        if(n < 2020) {return false;}
    }
    return true;
}

void solve() {
    int tc; cin>>tc;
    while(tc--) {
        int n; cin>>n;
        
        bool ans = f(n);
        if(ans) {cout<<"YES\n";}
        else {cout<<"NO\n";}
    }
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}