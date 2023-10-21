#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi vector<int>
#define vvi vector<vector<int>>
#define mod 1000000007

// -----------------------------------------------------

vi dp;

int state(int n) {
    // base case
    if(n == 0) return 1;
    if(dp[n] != -1) return dp[n];
    
    // transition
    dp[n] = 0;
    for(int i=1; i<=6 && n-i>=0; i++) {
        (dp[n] += state(n-i)) %= mod;
    }
    return dp[n];
}

void solve() {
    int n; cin>>n;
    
    dp.resize(n+1, -1);
    cout<<state(n)<<endl;
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}