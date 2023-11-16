#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi vector<int>
#define vvi vector<vector<int>>

// -----------------------------------------------------


void f(int i, vi& a, vvi& subset, vi temp) {
    // base case
    if(i >= a.size()) {
        subset.push_back(temp);
        return;
    }
    
    // recursive case
    temp.push_back(a[i]);
    f(i+1, a, subset, temp);
    temp.pop_back(); // backtrack
    
    f(i+1, a, subset, temp);
}

void solve() {
	vi a = {1,2,3};
	vi temp;
	vvi subset;
	f(0, a, subset, temp);
	for(auto& row: subset) {
	    cout<<"{";
	    for(auto& it: row) {cout<<it;}
	    cout<<"}\n";
	}
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}