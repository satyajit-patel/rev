class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        
        // prefixMin
        vector<int> prefixMin(n, 0);
        int mini = nums[0];
        for(int i=1; i<n; i++) {
            prefixMin[i] = mini;
            mini = std::min(mini, nums[i]);
        }
        
        // suffixMin
        vector<int> suffixMin(n, 0);
        mini = nums[n-1];
        for(int i=n-2; i>=0; i--) {
            suffixMin[i] = mini;
            mini = std::min(mini, nums[i]);
        }
        
        // (N) solution
        int minSum = INT_MAX;
        for(int index=1; index<n-1; index++) {
            int ele_i = prefixMin[index];
            int ele_j = nums[index];
            int ele_k = suffixMin[index];
            
            if((ele_i < ele_j) && (ele_k < ele_j)) {
                int curSum = ele_i + ele_j + ele_k;
                minSum = std::min(minSum, curSum);
            }
        }
        if(minSum == INT_MAX) return -1;
        return minSum;
    }
};