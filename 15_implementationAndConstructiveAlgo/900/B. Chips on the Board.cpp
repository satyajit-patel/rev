#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi std::vector<int>
#define vvi std::vector<std::vector<int>>
#define mod 1000000007

// -----------------------------------------------------

int f(int n, vi& a, vi& b) {
    /*
        (minA + b[0]) +
        (minA + b[1]) +
        (minA + b[2]) +
        .
        .
        (minA + b[n-1])
        
        i.e (minA*n) + (b[0]+b[1]+...b[n-1])
    */
    
    int sumA = 0;
    for(auto& it: a) {sumA += it;}
    int minA = *std::min_element(a.begin(), a.end());
    
    int sumB = 0;
    for(auto& it: b) {sumB += it;}
    int minB = *std::min_element(b.begin(), b.end());
    
    return std::min(minA*n+sumB, minB*n+sumA);
}

void solve() {
    int tc; std::cin>>tc;
    while(tc--) {
       int n; std::cin>>n;
       vi a(n), b(n);
       for(auto& it: a) {std::cin>>it;}
       for(auto& it: b) {std::cin>>it;}
       
       int ans = f(n, a, b);
       cout<<ans<<endl;
    }
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}