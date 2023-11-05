#include <bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define int long long
#define endl "\n"

signed main() {
	int n; cin>>n;
	map<string, int> nm;
	while(n--) {
		string s; cin>>s;
		nm[s]++;
	}
	int maxi = INT_MIN;
	string winner = "";
	for(auto& it: nm) {
		if(it.second > maxi) {
			maxi = it.second;
			winner = it.first;
		}
	}
	cout<<winner<<endl;
}
