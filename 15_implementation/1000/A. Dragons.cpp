#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi std::vector<int>
#define vvi std::vector<std::vector<int>>
#define mod 1000000007

// -----------------------------------------------------

void solve() {
    int s, n; cin>>s>>n;
    vector<pair<int, int>> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i].first>>a[i].second;
    }
    
    int our_power = s;
    std::sort(a.begin(), a.end());
    for(int i=0; i<n; i++) {
        int dragon_power = a[i].first;
        int dragon_bonus = a[i].second;
        if(our_power <= dragon_power) {
            cout<<"NO\n";
            return;
        }
        else {
            our_power += dragon_bonus;
        }
    }
    cout<<"YES\n";
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}