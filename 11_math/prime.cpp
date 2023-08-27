#include<bits/stdc++.h>
using namespace std;

vector<int> getPrime(int N) {
    vector<int> prime(N+1, 1);
    prime[0] = 0;
    prime[1] = 0;
    for(int i=2; i<=N; i++) {
        if(prime[i] == 0) continue;
        for(int j=i*2; j<=N; j += i) prime[j] = 0;
    }
    return prime;
}

void solve() {
    int N = 10000;
    vector<int> prime = getPrime(N);
    for(int i=0; i<=N; i++) if(prime[i] == 1) cout<<i<<" ";
}

int main() {
    solve();
    return 0;
}