// https://leetcode.com/problems/find-target-indices-after-sorting-array/description/
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        if(std::binary_search(nums.begin(), nums.end(), target)) {
            std::vector<int> ans;
            int first_index = std::lower_bound(nums.begin(), nums.end(), target)-nums.begin();
            int last_index = std::upper_bound(nums.begin(), nums.end(), target)-nums.begin()-1;
            for(int i=first_index; i<=last_index; i++) ans.push_back(i);
            return ans;
        }
        return {};
    }
};