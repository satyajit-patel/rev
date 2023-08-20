class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::multimap<int, int> hm;
        int n = nums.size();
        for(int i=0; i<n; i++) hm.insert({nums[i], i});
        std::sort(nums.begin(), nums.end());
        int i=0, j = n-1;
        vector<int> ans;
        while(i < j) {
            int sum = nums[i] + nums[j];
            if(sum == target) {
                auto it = hm.find(nums[i]);
                ans.push_back(it->second);
                hm.erase(it);
                it = hm.find(nums[j]);
                ans.push_back(it->second);
                break;
            }
            else if(sum > target) j--;
            else i++;
        }
        return ans; 
    }
};