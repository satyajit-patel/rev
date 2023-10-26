#include<bits/stdc++.h>
#define int long long
#define endl "\n"

void solve() {
    int tc; std::cin>>tc;
    while(tc--) {
        std::string s, copy; std::cin>>s;
        int defect = 0;
        if(s[0] != 'a') defect++;
        if(s[1] != 'b') defect++;
        if(s[2] != 'c') defect++;
        if(defect > 2) std::cout<<"NO\n";
        else std::cout<<"YES\n";
    }
}

signed main() {
    solve();
    return 0;
}