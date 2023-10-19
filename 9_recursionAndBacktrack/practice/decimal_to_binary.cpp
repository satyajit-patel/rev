#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi vector<int>
int n, k;

// -----------------------------------------------------

string s;
void to_binary(int num) {
	// base case
	if(num == 0) {return;}

	// recursive case
	to_binary(num/2);
	int rem = num%2;
	s += (rem + '0');
}

void solve() {
	// int tc; cin>>tc;
	// while(tc--) {
		
	// }
	
	cin>>n;
	s = "binary_is_";
	to_binary(n);
	cout<<s<<endl;
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}