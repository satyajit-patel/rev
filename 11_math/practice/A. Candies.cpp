#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define vi vector<int>
#define vvi vector<vector<int>>

// -----------------------------------------------------

int my_pow(int base, int power) {
    int ans = 1;
    while(power) {
        if(power&1) ans *= base;
        base *= base; // mera BASE tu badhade.. dj bale
        power /= 2;
        
    }
    return ans;
}

void solve() {
    int tc; cin>>tc;
    while(tc--) {
        int n; cin>>n;
        
        /*
             x+2x+4x+⋯+2^k−1x = n // given
             
            => x(1+2+4+.....2^k-1) = n
            (using GP formula if r=1, else a(r^n)-1/r-1)
            => x(1*(2^k)-1)/2-1 = n
            => (x(2^k)-1) = n
            => x = n/(2^k)-1
        */
        
        int x = -1;
        for(int k=2; k<=35; k++) {
            int deno = my_pow(2, k)-1;
            if(n%deno == 0) {
                x = n/deno;
                break;
            }
        }
        cout<<x<<endl;
    }
} 

// -----------------------------------------------------

signed main() {
	solve();
	return 0;
}