#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi vector<int>

// -----------------------------------------------------

void solve() {
	int n, k; cin>>n>>k;
	while(k--) {
	    int last_digit = n%10;
	    if(last_digit != 0) n -= 1;
	    else if(last_digit == 0) n /= 10;
	}
	cout<<n<<endl;
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}