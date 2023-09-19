class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        for(int i=0; i<n; i++) {
            bitset<12> bs(i);
            if(bs.count() == k) sum += nums[i];
        }
        return sum;
    }
};