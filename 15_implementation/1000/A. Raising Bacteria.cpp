#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main() {
	int n; cin>>n;

	bitset<32> bs(n);
	int num_set_bit = bs.count();
	cout<<num_set_bit<<endl;
}
