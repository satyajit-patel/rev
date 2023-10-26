#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi vector<int>
int n, m;

// -----------------------------------------------------

void solve() {
	cin>>n>>m;

	int num_of_diagonal = std::min(n, m);
	if((num_of_diagonal%2) == 0) {cout<<"Malvika\n";}
	else {cout<<"Akshat\n";}
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}