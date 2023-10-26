#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi vector<int>
int n, m;

// -----------------------------------------------------

void solve() {
	cin>>n;
	if(n >= 0) {cout<<n<<endl;}
	else {
		int lastEle = n%10;
		int delLast = n/10;
		int secondLast = delLast%10;
		int delSecondLast = delLast-(secondLast)+lastEle;
		cout<<std::max(delLast, delSecondLast)<<endl;
	}
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}