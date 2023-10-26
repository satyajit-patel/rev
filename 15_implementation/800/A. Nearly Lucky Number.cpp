#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi vector<int>

// -----------------------------------------------------

void solve() {
	int n; cin>>n;
	int num_luckyNumber = 0;
	while(n) {
	    int last_digit = n%10;
	    n /= 10;
	    if(last_digit==4 || last_digit==7) {num_luckyNumber++;}
	}
	if(num_luckyNumber==4 || num_luckyNumber==7) {cout<<"YES\n";}
	else {cout<<"NO\n";}
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}