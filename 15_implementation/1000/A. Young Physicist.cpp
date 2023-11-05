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
    vvi grid;
    for(int i=0; i<n; i++) {
        int a, b, c; cin>>a>>b>>c;
        vi temp;
        temp.push_back(a);
        temp.push_back(b);
        temp.push_back(c);
        grid.push_back(temp);
    }
    
    for(int j=0; j<3; j++) {
        int sum = 0;
        for(int i=0; i<n; i++) {
            sum += grid[i][j];
            // cout<<i<<j<<"->"<<sum<<endl;
        }
        if(sum != 0) {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}