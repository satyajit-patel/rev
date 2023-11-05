#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi std::vector<int>
#define vvi std::vector<std::vector<int>>
#define mod 1000000007

// -----------------------------------------------------

bool isvowel(char ch) {
    ch = std::tolower(ch);
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y';
}

void solve() {
    string s; cin>>s;
    
    string ans = "";
    for(auto& it: s) {
        it = std::tolower(it);
        if(isvowel(it)) {continue;}
        else {
            ans += '.';
            ans += it;
        }
    }
    cout<<ans<<endl;
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}