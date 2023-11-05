#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi std::vector<int>
#define vvi std::vector<std::vector<int>>
#define mod 1000000007

// -----------------------------------------------------

void solve() {
    string s; cin>>s;
    
    bool all_caps = true;
    for(int i=1; i<s.size(); i++) {
        if(islower(s[i])) {
            all_caps = false;
            break;
        }
    }
    if(all_caps) {
        for(int i=0; i<s.size(); i++) {
            if(std::islower(s[i])) {
                s[i] = toupper(s[i]);
            }
            else {
                s[i] = tolower(s[i]);
            }
        }
    }
    cout<<s<<endl;
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}