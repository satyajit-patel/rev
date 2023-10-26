#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi std::vector<int>
#define vvi std::vector<std::vector<int>>
#define mod 1000000007

// -----------------------------------------------------

void solve() {
    int tc; std::cin>>tc;
    while(tc--) {
        int n, k; cin>>n>>k;
        vi a(n);
        for(auto& it: a) {cin>>it;}
        
        std::sort(a.begin(), a.end());
        int hmm = 1, ans = 1;
        for(int i=1; i<n; i++) {
            if(a[i]-a[i-1] <= k) {hmm++;}
            else {hmm = 1;}
            ans = std::max(ans, hmm);
        }
        int removeNeeded = n-ans;
        cout<<removeNeeded<<endl;
    }
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}