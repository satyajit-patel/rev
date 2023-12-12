class Solution{
public:
    int findSubArraySum(int Arr[], int N, int k) {
        int ans = 0;
        map<int, int> mp;
        mp[0]++;
        int prefixsum = 0;
        for(int i=0; i<N; i++) {
            prefixsum += Arr[i];
            int target = prefixsum - k;
            if(mp.count(target)) {
                ans += mp[target];
            }
            mp[prefixsum]++;
        }
        return ans;
    }
};