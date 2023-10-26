class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        long long mod = 12345LL;
        vector<vector<int>> ans(r, vector<int>(c));

        vector<int> nums;
        for(auto& row: grid) {
            for(auto& it: row) {nums.push_back(it);}
        }
        int n = nums.size();

        // prefix
        vector<long long> prefix(n);
        long long val = 1LL;
        for(int i=0; i<n; i++) {
            val *= nums[i];
            val %= mod;
            prefix[i] = val;
        }

        // suffix
        val = 1LL;
        vector<long long> suffix(n);
        for(int i=n-1; i>=0; i--) {
            val *= nums[i];
            val %= mod;
            suffix[i] = val;
        }

        // for(auto& it: prefix) {cout<<it<<" ";}
        // cout<<endl;
        // for(auto& it: suffix) {cout<<it<<" ";}

        int index = 0;
        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) {
                if(index == 0) {
                    if(index+1 >= n) {continue;}
                    ans[i][j] = suffix[index+1];
                }
                else {
                    long long head = prefix[index-1];
                    long long tail = 1LL;
                    if(index+1 < n) {tail = suffix[index+1];}
                    head *= tail;
                    head %= mod;
                    ans[i][j] = head;    
                }
                index++;
            }
        }
        return ans;
    }
};