class Solution {
public:
    vector<int> nums;
    vector<vector<int>> ans;

    void f(int i, int& sum, vector<int>& temp) {
        // cout<<sum<<endl;
        // base case
        if(sum < 0) {return;}
        if(i >= nums.size()) {return;}
        if(sum == 0) {
            ans.push_back(temp);
            return;
        }

        // recursive acse
        sum -= nums[i];
        temp.push_back(nums[i]);
        f(i, sum, temp);
        // backtrack
        sum += nums[i];
        temp.pop_back();

        f(i+1, sum, temp);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        ans.clear();
        nums.clear(), nums = candidates;
        int sum = target;
        vector<int> temp;
        f(0, sum, temp);
        return ans;
    }
};