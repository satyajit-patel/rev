#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"


void in() {
	int tc; cin>>tc;
	while(tc--) {
		int n; cin>>n;
		vector<int> arr(n);
		for(auto& it:arr) cin>>it;

		/*
			property : 

			x xor x = 0
			x xor 0 = x;
		*/

		if(n&1) {

			/*
				1 2 3 4 5 = x;
				x x x x x = x;
				x 0 0 0 0 = x;
				x x 0 0 0 = 0;	
			*/
			cout<<4<<endl;
			cout<<1<<" "<<n<<endl;
			cout<<2<<" "<<n<<endl;
			cout<<1<<" "<<2<<endl;
			cout<<1<<" "<<2<<endl;
		}
		else {
			cout<<2<<endl;
			cout<<1<<" "<<n<<endl;
			cout<<1<<" "<<n<<endl;
		}
	}
} 

signed main() {
	in();
	return 0;
}