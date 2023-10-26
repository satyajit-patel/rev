class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        std::vector<int> ans;
        std::deque<int> dq;
        int i=0, j = 0;
        while(i<nums.size() && j<nums.size()) {
            while(!dq.empty() && nums[j]>dq.back()) dq.pop_back(); // jaldi wahan se hato
            dq.push_back(nums[j]);
            if(j-i+1 < k) j++;
            else if(j-i+1 == k) {
                ans.push_back(dq.front());
                if(dq.front() == nums[i]) dq.pop_front();
                i++;
                j++;
            }
        }
        return ans;
    }
};