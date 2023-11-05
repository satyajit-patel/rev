#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi std::vector<int>
#define vvi std::vector<std::vector<int>>
#define mod 1000000007

// -----------------------------------------------------

bool f(int i, string& s, string& temp) {
    // base case
    if(temp == "hello") {return true;}
    if(i >= s.size()) {return false;}
    if(temp.size() > 5) {return false;}
    if(temp.size()>=1 && temp[0] != 'h') {return false;}
    if(temp.size()>=2 && temp[1] != 'e') {return false;}
    if(temp.size()>=3 && temp[2] != 'l') {return false;}
    if(temp.size()>=4 && temp[3] != 'l') {return false;}
    if(temp.size()>=5 && temp[4] != '0') {return false;}
    
    // transition
    temp += s[i];
    if(f(i+1, s, temp)) {return true;}
    temp.pop_back();
    if(f(i+1, s, temp)) {return true;}
    return false;
}

void solve() {
    string s; cin>>s;
    
    string temp = "";
    bool ans = f(0, s, temp);
    if(ans) {cout<<"YES";}
    else {cout<<"NO\n";}
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}