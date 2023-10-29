#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi std::vector<int>
#define vvi std::vector<std::vector<int>>
#define mod 1000000007

// -----------------------------------------------------

void solve() {
    int tc; cin>>tc;
    while(tc--) {
        int n, a, b; cin>>n>>a>>b;
        
        for(int i=0; i<n; i++) {
            int num = (i % b);
            cout<<char('a' + num);
        }
        cout<<endl;
    }
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}