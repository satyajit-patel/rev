#include <bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define int long long
#define endl "\n"

signed main() {
	int a, b; cin>>a>>b;

	int time = a;
	while(b <= a) {
		time += (a/b);
		int remainingCandle = (a/b) + (a%b);
		a = remainingCandle;
	}
	cout<<time<<endl;
}
