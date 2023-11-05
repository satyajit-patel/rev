#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi std::vector<int>
#define vvi std::vector<std::vector<int>>
#define mod 1000000007

// -----------------------------------------------------

void solve() {
    int k; cin>>k;
    if(k == 0) {
        cout<<0<<endl;
        return;
    }
    vi a(12);
    for(auto& it: a) {cin>>it;}
    
    std::sort(a.begin(), a.end());
    std::reverse(a.begin(), a.end());
    int sum = 0;
    for(int i=0; i<12; i++) {
        sum += a[i];
        if(sum >= k) {
            cout<<i-0+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}