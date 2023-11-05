#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi std::vector<int>
#define vvi std::vector<std::vector<int>>
#define mod 1000000007

// -----------------------------------------------------


bool islucky(string& temp) {
    for(auto& ch: temp) {
        if(ch != '4') {
            if(ch != '7') {return false;}
        }
    }
    return true;
}

void solve() {
    int n; cin>>n;
    
    for(int i=1; i<=n; i++) {
        string temp = std::to_string(i);
        if(!islucky(temp)) {continue;}
        
        // cout<<i<<endl;
        if(n%i == 0) {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}