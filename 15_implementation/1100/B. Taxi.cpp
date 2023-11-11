#include <bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define int long long
#define endl "\n"
#define vvi vector<vector<int>>

int f(int sum) {
	return (sum/4) + (sum%4 != 0);
}

void solve() {
	int n; cin>>n;
	int num_group1 = 0;
	int num_group2 = 0;
	int num_group3 = 0;
	int num_group4 = 0;
	for(int i=0; i<n; i++) {
		int x; cin>>x;
		if(x == 1) {
			num_group1++;
		}
		else if(x == 2) {
			num_group2++;
		}
		else if(x == 3) {
			num_group3++;
		}
		else {
			num_group4++;
		}
	}

	int taxi = 0;
	// group of 4
	taxi += num_group4;

	// group of 3
	taxi += num_group3;
	num_group1 = num_group1 - num_group3;
	// because in every 3group, 1 extra person can join in
	if(num_group1 < 0) {
		num_group1 = 0;
	}

	// group of 2
	if(num_group2 % 2 == 0) {
		taxi += (num_group2/2);
	}
	else {
		taxi += (num_group2/2) + 1;
		num_group1 = num_group1 - 2;
		if(num_group1 < 0) {
			num_group1 = 0;
		}

	}

	// group of 1
	taxi += std::ceil(num_group1/4.0);

	cout<<taxi<<endl;
}

signed main() {
	solve();
	return 0;
}
