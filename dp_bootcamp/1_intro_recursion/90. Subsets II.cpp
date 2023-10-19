class Solution {
public:
    void f(vector<int>& nums, vector<vector<int>>& ans, int n, vector<int>& temp, int i=0) {
        // base case
        if(i >= n) {
            // for(auto& it: temp) {cout<<it<<" ";}
            // cout<<endl;
            ans.push_back(temp);
            return;
        }

        // recursive case
        temp.push_back(nums[i]);
        f(nums, ans, n, temp, i+1);
        temp.pop_back();

        f(nums, ans, n, temp, i+1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        vector<vector<int>> ans;
        f(nums, ans, n, temp);
        std::sort(ans.begin(), ans.end());
        for(auto& row: ans) {
            std::sort(row.begin(), row.end());
        }
        set<vector<int>> st;
        for(auto& row: ans) {
            temp.clear();
            temp = row;
            st.insert(temp);
        }
        ans.clear();
        for(auto& it: st) {
            temp.clear();
            temp = it;
            ans.push_back(temp);
        }
        return ans;
    }
};