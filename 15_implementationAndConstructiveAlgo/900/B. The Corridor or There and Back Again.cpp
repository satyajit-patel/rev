#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi std::vector<int>
#define vvi std::vector<std::vector<int>>
#define mod 1000000007

// -----------------------------------------------------

void solve() {
    int tc; cin>>tc;
    while(tc--) {
       int n; cin>>n;
       std::vector<std::pair<int, int>> a;
       for(int i=0; i<n; i++) {
           int bomb, timer; std::cin>>bomb>>timer;
           a.push_back({bomb, timer});
       }
       
       int minGuess = INT_MAX;
       for(int i=0; i<n; i++) {
           auto it = a[i];
           int curStep = it.first;
           int goAnsBack = (it.second-1)/2;
           int totStep = curStep+goAnsBack;
           minGuess = std::min(minGuess, totStep);
       }
       cout<<minGuess<<endl;
    }
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}