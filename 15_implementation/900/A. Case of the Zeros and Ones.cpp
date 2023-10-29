#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi std::vector<int>
#define vvi std::vector<std::vector<int>>
#define mod 1000000007

// -----------------------------------------------------

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    
    // // O(N^2) TLE 1<=n<=10^5
    // int i = s.find("10");
    // if(i == string::npos) {i = s.find("01");}
    // while(i != string::npos) { // (N)
    //     s.erase(i, 2);
    //     i = s.find("10"); // O(N)
    //     if(i == string::npos) {i = s.find("01");}
    // }
    // cout<<s.size()<<endl;
    
    // O(N)
    int num_0 = 0, num_1 = 0;
    for(int i=0; i<n; i++) {
        if(s[i] == '0') {num_0++;}
        else {num_1++;}
    }
    cout<<std::abs(num_1 - num_0)<<endl;
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}