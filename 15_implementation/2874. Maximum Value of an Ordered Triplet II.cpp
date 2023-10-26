class Solution {
public:
    vector<int> getPreMax(vector<int>& nums) {
        vector<int> preMax;
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i=0; i<n; i++) {
            if(nums[i] > maxi) maxi = nums[i];
            preMax.push_back(maxi);
        }
        return preMax;
    }
    
    vector<int> getPostMax(vector<int>& nums) {
        vector<int> postMax;
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i=n-1; i>=0; i--) {
            if(nums[i] > maxi) maxi = nums[i];
            postMax.push_back(maxi);
        }
        std::reverse(postMax.begin(), postMax.end());
        return postMax;
    }
    
    long long maximumTripletValue(vector<int>& nums) {
        long long ans = 0;
        long long mod = 1e18;
        vector<int> preMax = getPreMax(nums);
        vector<int> postMax = getPostMax(nums);

        // for(auto& it:preMax) cout<<it<<" ";
        // cout<<endl;
        // for(auto& it:nums) cout<<it<<" ";
        // cout<<endl;
        // for(auto& it:postMax) cout<<it<<" ";
        // cout<<endl;

        int n = nums.size();
        for(int i=1; i<n-1; i++) {
            long long sub = ((preMax[i] % mod)-(nums[i] % mod)) % mod;
            long long mul = ((sub % mod) * (postMax[i+1] % mod)) % mod;
            // cout<<" sample "<<mul<<endl;
            ans = std::max(ans, mul);
        }
        return ans;
    }
};