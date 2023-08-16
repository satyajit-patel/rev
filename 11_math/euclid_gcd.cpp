#include<bits/stdc++.h>
int euclid_gcd(int maxi, int mini) {
    if(mini == 0) return maxi;
    return my_gcd(mini, maxi%mini);
}

void input() {
    std::cout<<euclid_gcd(123456, 789);
}

int main() {
    input();
    return 0;
}
