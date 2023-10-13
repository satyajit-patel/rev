#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

vector<int> f(int n) {
	vector<int> prime(n, 1);

	prime[0] = 0;
	prime[1] = 0;

	for(int i=2; i<n/2; i++) {
		int j = 2*i;
		while(j < n) {
			prime[j] = 0;
			j += i;
		}
	}
	return prime;
}

void solve() {
	int n = 100;
	vector<int> prime = f(n);
	for(int i=0; i<n; i++) {
		if(prime[i] == 1) {cout<<i<<" ";}
	}
} 

signed main() {
	solve();
	return 0;
}