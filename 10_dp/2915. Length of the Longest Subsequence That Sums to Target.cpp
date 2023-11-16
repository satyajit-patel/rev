class Solution {
public:
    int f(int n, int sum, vector<int>& nums, vector<vector<int>>& dp) {
        // base case
        if(sum == 0) {return 0;}
        if(n < 0) {return -1e8;}
        if(sum < 0) {return -1e8;}
        if(dp[n][sum] != -1) {return dp[n][sum];}
        
        // transition
        return dp[n][sum] = std::max(1+f(n-1, sum-nums[n], nums, dp), f(n-1, sum, nums, dp));
    }
    
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> dp(n+1, vector<int>(target+1, -1));
        int ans = f(n-1, target, nums, dp);
        if(ans < 0) {return -1;}
        return ans;
    }
};