#include<iostream>
#include<cmath>
#define ll long long

// -----------------------------------------------------

// int ceil(int a, int b) {
//     int ans = (a/b) + (a%b != 0);
//     return ans;
// }

void solve() {
    ll x, y, z; std::cin>>x>>y>>z;
    
    ll a =  ceil((x*1.0)/z);
    ll b =  ceil((y*1.0)/z);
    ll area = a * b;
    std::cout<<area<<std::endl;
} 

// -----------------------------------------------------

int main() {
	solve();
	return 0;
}