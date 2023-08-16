class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        std::priority_queue<int> maxHeap;
        for(auto& it:nums) maxHeap.push(it);
        k -= 1;
        while(k--) maxHeap.pop();
        return maxHeap.top();
    }
};