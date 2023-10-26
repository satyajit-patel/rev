#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi vector<int>
#define vvi vector<vector<int>>
#define mod 1000000007

// -----------------------------------------------------

void solve() {
    int tc; cin>>tc;
    while(tc--) {
       int n; cin>>n;
       
       int factorize2 = 0, factorize3 = 0;
       while(n%2 == 0) {
           n /= 2;
           factorize2++;
       }
       while(n%3 == 0) {
           n /= 3;
           factorize3++;
       }
       
       if(n==1 && factorize2 <= factorize3) {
           int ans = 2 * factorize3 - factorize2;
           cout<<ans<<endl;
       }
       else {cout<<-1<<endl;}
    }
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}