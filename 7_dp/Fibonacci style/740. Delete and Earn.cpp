class Solution {
public:
    std::unordered_map<int, int> hm;
    std::vector<int> A, dp;

    int f(int i) {
        // base case
        if(i >= A.size()) return 0;
        if(dp[i] != -1) return dp[i];

        // recursive case
        int head = A[i] * hm[A[i]] + f(std::upper_bound(A.begin(), A.end(), A[i]+1)-A.begin());
        int tail = 0 + f(i+1);

        // return case
        int ans = std::max(head, tail);
        dp[i] = ans;
        return ans;
    }

    int deleteAndEarn(vector<int>& nums) {
        int n = nums.size();
        A.clear(), A = nums;
        std::sort(A.begin(), A.end());
        hm.clear();
        for(auto& it : A) hm[it]++;
        dp.resize(n+1, -1);
        return f(0);
    }
};