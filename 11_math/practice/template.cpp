#include<bits/stdc++.h>
// using namespace std;

#define endl  "\n"
#define MOD   1000000007
#define int   long long int
 
#define vi    std::vector<int>
#define vc    std::vector<char>
#define vvi   std::vector<std::vector<int>>
#define vvc   std::vector<std::vector<char>>
 
#define VIS   std::unordered_map<int, int>
#define ADJ   std::unordered_map<int, std::unordered_set<int>>
 
// int mul(int a, int b) {
//   return ((a%MOD) * (b%MOD))%MOD;
// }
 
// int add(int a, int b) {
//   return ((a%MOD) + (b%MOD))%MOD;
// }   
 
// int sub(int a, int b) {
//   return ((a%MOD) - (b%MOD) + MOD)%MOD;
// }
 
// int my_pow(int base, int power) {
//   int ans = 1;
//   while(power) {
//       if(power&1) ans = mul(ans, base);
//       base = mul(base, base);
//       power >>= 1;
//   }
//   return ans;
// }
 
// int div(int a, int b) {
//   int inv_b = my_pow(b, MOD-2);
//   return mul(a, inv_b);
// }   
 
// int my_gcd(int maxi, int mini) {
//   return mini ? my_gcd(mini, maxi%mini) : maxi;
// }
 
// int lcm(int a, int b) {
//   int x = mul(a, b);
//   int y = my_gcd(a, b);
//   return div(x, y);
// }
// vi sievePrime(int n) {
//   vi prime(n, 1);
//   prime[0] = 0;
//   prime[1] = 0;
//   for(int i=2; i*i<n; i++) {
//       if(prime[i] == 0) continue;
//       for(int j=i*i; j<n; j+=i) prime[j] = 0;
//   }
//   return prime;
// }
 
// vi my_fact(int n) {
//   vi fact(n+1);
//   fact[0] = 1;
//   for(int i=1; i<=n; i++) fact[i] = mul(i, fact[i-1]);
//   return fact;
// }
 
// int nCr(int n, int r) {
//   if(r > n) return 0;
//   if(n < 0) return 0;
//   if(r < 0) return 0;
//   if(n == r) return 1;
 
//   vi fact = my_fact(n+1);
//   int numo = fact[n];
//   int deno = mul(fact[r], fact[n-r]);
//   return div(numo, deno);
// }
 
// class DSU {
// private:
//   vi parent, size;
// public:
//   DSU(int N) {
//     parent.resize(N);
//     for(int i=0; i<N; i++) parent[i] = i;
//     size.resize(N, 1);
//   }
 
//   int getParent(int node) {
//     if(parent[node] == node) return node;
//     return parent[node] = getParent(parent[node]);
//   }
 
//   void unionS(int u, int v) {
//     int nu = getParent(u);
//     int nv = getParent(v);
//     if(nu == nv) return;
//     if(size[nu] < size[nv]) {
//       parent[nu] = nv;
//       size[nv] += size[nu];
//     }
//     else {
//       parent[nv] = nu;
//       size[nu] += size[nv];
//     }
//   }
// };
 
// // left to right clockwise
// int dx[4] = {0, -1, 0, +1};
// int dy[4] = {-1, 0, +1, 0};
// const std::string DIR = "LURD";
 
// bool isValid(int i, int j, vvc& grid) {
//   int N = grid.size();
//   int M = grid[i].size();
//     return i>=0 && i<N && j>=0 && j<M;
// }
 
// ------------------------------------------------
// 
// ------------------------------------------------

void input() {
    
}
 
// ---------------------------------------------
signed main() {
  input();
  return 0;
}