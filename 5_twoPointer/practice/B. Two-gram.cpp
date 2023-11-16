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
    
    map<string, int> hm;
    int i = 0, j = 0;
    while(i<n && j<n) {
        if(j-i+1 < 2) {j++;}
        else if(j-i+1 == 2) {
            hm[s.substr(i, 2)]++;
            i++;
            j++;
        }
    }
    int freq = -1;
    string ans = "";
    for(auto& it: hm) {
        if(it.second > freq) {
            freq = it.second;
            ans = it.first;
        }
    }
    cout<<ans<<endl;
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}