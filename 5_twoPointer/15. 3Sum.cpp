class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        std::sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++) {
            for(int j=i+1; j<nums.size(); j++) {
                // A[i] + A[j] + x = 0;
                int x = 0 - (nums[i] + nums[j]);
                if(std::binary_search(nums.begin()+j+1, nums.end(), x)) {
                    std::vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(x);
                    ans.push_back(temp);
                    while(j+1 < nums.size() && nums[j+1] == nums[j]) j++;
                }
            }
            while(i+1 < nums.size() && nums[i+1] == nums[i]) i++;
        }
        return ans;
    }
};