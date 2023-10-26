#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi vector<int>
#define vvi vector<vector<int>>
#define mod 1000000007

// -----------------------------------------------------

void solve() {
    int n, m; cin>>n>>m;
    
    int ans = n;
    while(n >= m) {
        // cout<<n;
        ans += (n/m);
        // n = (n/m); // this alone can't work for odd numbers
        n = (n/m) + (n%m);
    }
    cout<<ans<<endl;
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}