class Solution {
public:
    int subarraySumK(vector<int> &a, int n, int k) {
        int ans = INT_MAX;
        int i=0, j = 0, sum = 0;
        while(i<n && j<n) {
            sum += a[j];
            
            while(sum >= k) {
                ans = min(ans, j-i+1);
                sum -= a[i];
                i++;
            }
            j++;
        }
        if(ans == INT_MAX) {
            return -1;
        }
        return ans;
    }
};