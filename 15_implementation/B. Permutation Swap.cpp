#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi std::vector<int>
#define vvi std::vector<std::vector<int>>
#define mod 1000000007

// -----------------------------------------------------

int my_gcd(int maxi, int mini) {
    // base case
    if(!mini) {return maxi;}
    
    // transition
    return my_gcd(mini, maxi%mini);
}

int f(int n, vi& a) {
    int ans = 0;
    // as we know -> 0 xor x = x
    for(int sortedEle=1; sortedEle<=n; sortedEle++) {
        int diff = std::abs(a[sortedEle-1] - sortedEle);
        // if(diff != 0) {ans = __gcd(ans, diff);}
        if(diff != 0) {ans = my_gcd(ans, diff);}
    }
    return ans;
}

void solve() {
    int tc; std::cin>>tc;
    while(tc--) {
        // as 2<=n<=10^5 so we can't have n^2 solution
       int n; std::cin>>n;
       vi a(n);
       for(auto& it: a) {std::cin>>it;}
       
       // always try to find some pattern
       cout<<f(n, a)<<endl;
    }
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}