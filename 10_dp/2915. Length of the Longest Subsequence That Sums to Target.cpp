class Solution {
public:
    vector<int> nums;
    vector<vector<int>> dp;

    int state(int n, int sum) {
        // base case
        if(sum < 0) {
            return -1e8;
        }
        if(sum == 0) {
            return 0;
        }
        if(n < 0) {
            return -1e8;
        }
        if(dp[n][sum] != -1) {
            return dp[n][sum];
        }

        // transition
        dp[n][sum] = state(n-1, sum);
        if(sum-nums[n] >= 0) {
            dp[n][sum] = max(dp[n][sum], 1 + state(n-1, sum-nums[n]));
        }
        return dp[n][sum];
    }

    int lengthOfLongestSubsequence(vector<int>& _nums, int target) {
        nums.clear(), nums = _nums;
        int n = nums.size();
        dp.resize(n+1, vector<int>(target+1, -1));
        int ans = state(n-1, target);
        if(ans < 0) {
            return -1;
        }
        return ans;
    }
};