#include <bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define int long long
#define endl "\n"
#define vvi vector<vector<int>>
// ----------------------------------------------------------
void solve() {
	int n, k; cin>>n>>k;
	vi a(n);
	for(auto& it: a) {
		cin>>it;
	}

	int sum = 0;
	int minSum = INT_MAX;
	int index = -1;
	int i = 0, j = 0;
	while(i<n && j<n) {
		sum += a[j];
		if(j-i+1 < k) {
			j++;
		}
		else if(j-i+1 == k) {
			// cout<<sum<<endl;
			if(sum < minSum) {
				minSum = sum;
				index = i;
			}
			sum -= a[i];
			i++;
			j++;
		}
	}
	// expecting 1based indexing
	cout<<index + 1<<endl;
}
// ----------------------------------------------------------
signed main() {
	solve();
	return 0;
}
