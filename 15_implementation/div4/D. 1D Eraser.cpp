#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int getScore(int i, int j) {
	int up = i + 1;
	int down = 10 - i;
	int left = j + 1;
	int right = 10 - j;
	int mini = INT_MAX;
	mini = std::min(mini, std::min(up, down));
	mini = std::min(mini, std::min(left, right));
	return mini;
}

void in() {
	int tc; cin>>tc;
	while(tc--) {
		int ans = 0;
		int n, k; cin>>n>>k;
		string s; cin>>s;
		for(int i=0; i<n; i++) {
			if(s[i] == 'B') {
				ans++;
				i += (k - 1);
			}
		}
		cout<<ans<<endl;
	}
} 

signed main() {
	in();
	return 0;
}