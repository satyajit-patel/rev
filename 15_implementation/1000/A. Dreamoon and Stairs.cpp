#include <bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define int long long
#define endl "\n"

set<int> st;
void state(int n, int step) {
	// cout<<n<<"->"<<step<<endl;
	// base case
	if(n == 0) {
		st.insert(step);
		return;
	}
	if(n < 0) {
		return;
	}

	// transition
	state(n-2, step+1);
	state(n-1, step+1);
}

void solve() {
	int n, m; cin>>n>>m;

	// // TLE
	// st.clear();
	// state(n, 0);
	// // for(auto& it: st) {
	// // 	cout<<it<<" ";
	// // }

	// for(auto& it: st) {
	// 	if(it%m == 0) {
	// 		cout<<it;
	// 		return; 
	// 	}
	// }
	// cout<<-1<<endl;

	int ans = -1;
	if(m > n) {
		cout<<ans<<endl;
		return;
	}
	if(n&1) {
		ans = n/2+1;
	}
	else {
		ans = n/2;
	}
	while(ans%m != 0) {
		ans++;
	}
	cout<<ans<<endl;	
}

signed main() {
	solve();
	return 0;
}
