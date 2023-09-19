class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n = nums.size();
        vector<int> newNums(2*n);
        for(int i=0; i<2*n; i++) newNums[i] = nums[i % n];
        int newN = newNums.size();
        int i=0, j=0;
        while(i<newN && j<newN) {
            if(j-i+1 < n) j++;
            else if(j-i+1 == n) {
                // vector<int> temp(newNums.begin()+i, newNums.begin()+j+1);
                // for(auto& it:temp) cout<<it<<" ";
                // cout<<endl;
                
                if(std::is_sorted(newNums.begin()+i, newNums.begin()+j+1)) return (n-i)%n;
                i++;
                j++;
            }
        }
        return -1;
    }
};