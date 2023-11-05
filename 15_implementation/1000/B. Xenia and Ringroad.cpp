#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main() {
	int n, m; cin>>n>>m;
	int prevHouse = 1;
	int time = 0;
	while(m--) {
		int curHouse; cin>>curHouse;
		if(prevHouse <= curHouse) {
			time += (curHouse - prevHouse);
		}
		else {
			time += (n - prevHouse + curHouse);
		}
		prevHouse = curHouse;
	}
	cout<<time<<endl;
}
