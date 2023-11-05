#include <bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define int long long
#define endl "\n"

int my_pow(int base, int power, int mod) {
	int ans = 1;
	while(power) {
		if(power&1) {
			ans = ((ans%mod) * (base%mod)) % mod;
		}

		base = ((base%mod) * (base%mod)) % mod;
		power /= 2;
	}
	return ans;
}

signed main() {
	int x = 1378;
	int n; cin>>n;

	int mod = 10;
	int base = x % mod;
	int power = n;
	int ans = my_pow(base, power, mod);
	int last_digit = ans % 10;
	cout<<last_digit<<endl;
}
