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
		int score = 0;
		for(int i=0; i<10; i++) {
			for(int j=0; j<10; j++) {
				char ch; cin>>ch;
				if(ch == 'X') score += getScore(i, j);
			}
		}
		cout<<score<<endl;
	}
} 

signed main() {
	in();
	return 0;
}