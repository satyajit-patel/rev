#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi vector<int>
int n, k;

// -----------------------------------------------------

void all_binary_of_len(int i, int len, vector<string>& ans, string& temp) {
	// base case
	if(i >= len) {
		ans.push_back(temp);
		return;
	}

	// recursive case
	temp.push_back('0');
	all_binary_of_len(i+1, len, ans, temp);
	temp.pop_back(); // backtrack

	temp.push_back('1');
	all_binary_of_len(i+1, len, ans, temp);
	temp.pop_back();
}

void solve() {
	// int tc; cin>>tc;
	// while(tc--) {
		
	// }
	
	cin>>n;
	string temp;
	vector<string> ans;
	all_binary_of_len(0, n, ans, temp);
	for(auto& it: ans) {cout<<it<<endl;}
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}