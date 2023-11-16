class Solution {
public:
    vector<int> nums;
    std::vector<std::vector<int>> dp;

    int f(int i, int prev) {
        // basecase
        if(i >= nums.size()) return 0;
        if(dp[i][prev] != -1) return dp[i][prev];

        // recursive case
        int head = 0;
        if(prev==1e4 || nums[i]>nums[prev]) head = 1 + f(i+1, i);
        int tail = f(i+1, prev);

        // return case
        int ans = std::max(head, tail);
        dp[i][prev] = ans;
        return ans;
    }

    int lengthOfLIS(vector<int>& _nums) {
        nums.clear(), nums = _nums;
        dp.resize(nums.size()+1, std::vector<int>(1e4+1, -1));
        return f(0, 1e4);
    }
};