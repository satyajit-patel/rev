#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi std::vector<int>
#define vvi std::vector<std::vector<int>>
#define mod 1000000007

// -----------------------------------------------------

void solve() {
    string alpha = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char ch; cin>>ch;
    string s; cin>>s;
    
    string ans = "";
    if(ch == 'R') {
        for(int i=0; i<s.size(); i++) {
            for(int j=0; j<alpha.size(); j++) {
                if(s[i] == alpha[j]) {ans += alpha[j-1];}
            }
        }   
    }
    else {
        for(int i=0; i<s.size(); i++) {
            for(int j=0; j<alpha.size(); j++) {
                if(s[i] == alpha[j]) {ans += alpha[j+1];}
            }
        }   
    }
    cout<<ans<<endl;
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}