#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi vector<int>
#define vvi vector<vector<int>>

// -----------------------------------------------------


void solve() {
    int n, m; cin>>n>>m;
    vi a(n);
    for(auto& it: a) {cin>>it;}
    
    int maxSum = INT_MIN;
    int sum = 0;
    std::sort(a.begin(), a.end());
    for(int i=0; i<m; i++) {
        sum += (a[i] * -1);
        maxSum = std::max(maxSum, sum);
    }
    if(maxSum < 0) {cout<<0<<endl;} // as atmost, so we migt take none
    else {cout<<maxSum<<endl;} 
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}