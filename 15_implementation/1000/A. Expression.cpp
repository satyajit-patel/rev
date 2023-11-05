#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi std::vector<int>
#define vvi std::vector<std::vector<int>>
#define mod 1000000007

// -----------------------------------------------------

void solve() {
    // 1+2*3=7
    // 1*(2+3)=5
    // 1*2*3=6
    // (1+2)*3=9
    // 1+2+3=6
    
    int a, b, c; cin>>a>>b>>c;
    int maxi = INT_MIN;
    int case1 = a+b*c;
    int case2 = a*(b+c);
    int case3 = a*b*c;
    int case4 = (a+b)*c;
    int case5 = a+b+c;
    maxi = std::max({case1, case2, case3, case4, case5});
    cout<<maxi<<endl;
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}