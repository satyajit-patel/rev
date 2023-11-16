class Solution {
public:
    std::vector<int> A, dp;

    int f(int n) {
        // base case
        if(n < 0) return 0;
        if(dp[n] != -1) return dp[n];

        // recursive case
        int head = A[n] + f(n-2);
        int tail = 0 + f(n-1);

        // return case
        int ans = std::max(head, tail);
        dp[n] = ans;
        return ans;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        A.clear(), A = nums;
        dp.resize(n+1, -1);
        return f(n-1);
    }
};