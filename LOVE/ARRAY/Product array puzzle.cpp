class Solution{
public:
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        vector<long long int> ans;
        if(n == 1) {
            ans.push_back(1LL);
            return ans;
        }
        
        // // O(N2)
        // for(int i=0; i<n; i++) {
        //     long long mul = 1;
        //     for(int j=0; j<n; j++) {
        //         if(j != i) {
        //             mul *= 1LL * nums[j];
        //         }
        //     }
        //     ans.push_back(mul);
        // }
        
        vector<long long int> prefixMul;
        long long mul = 1;
        for(int i=0; i<n; i++) {
            mul *= 1LL * nums[i];
            prefixMul.push_back(mul);
        }
        
        vector<long long int> suffixMul(n);
        mul = 1;
        for(int i=n-1; i>=0; i--) {
            mul *= 1LL * nums[i];
            suffixMul[i] = mul; 
        }
        
        for(int i=0; i<n; i++) {
            if(i == 0) {
                ans.push_back(suffixMul[i+1]);
            }
            else if(i == n-1) {
                ans.push_back(prefixMul[i-1]);
            }
            else {
                mul = prefixMul[i-1] * suffixMul[i+1];
                ans.push_back(mul);
            }
        }
        
        return ans;
    }
};
