class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int id, int vd) {
        int n = nums.size();
        int maxVal = INT_MIN;
        int maxIndex = -1;
        int minVal = INT_MAX;
        int minIndex = -1;
        if((n-id) < 0) {return {-1, -1};}
        for(int i=0; i<n-id; i++) {
            if(nums[i] > maxVal) {
                maxVal = nums[i];
                maxIndex = i;
            }
            if(nums[i] < minVal) {
                minVal = nums[i];
                minIndex = i;
            }
            int j = i+id;
            if(abs(nums[j]-minVal) >= vd) {return {minIndex, j};}
            if(abs(nums[j]-maxVal) >= vd) {return {maxIndex, j};}
        }
        return {-1, -1};
    }
};