#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi vector<int>

// -----------------------------------------------------

bool is_power_of_2(int n) {
	return (n&(n-1)) == 0;
}

void solve() {
	int tc; cin>>tc;
    while(tc--) {
        int n; cin>>n;
        if(is_power_of_2(n)) {cout<<"NO\n";}
        else {cout<<"YES\n";}
    }
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}