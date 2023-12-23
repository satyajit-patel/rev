class Solution {
  public:
    int minCandy(int N, vector<int> &ratings) {
        vector<int> ans(N, 1);
        for(int i=1; i<N; i++) {
            if(ratings[i] > ratings[i-1]) {
                ans[i] = ans[i-1] + 1;
            }
        }
        for(int i=N-2; i>=0; i--) {
            if(ratings[i] > ratings[i+1]) {
                if(ans[i] <= ans[i+1]) {
                    ans[i] = ans[i+1] + 1;   
                }
            }
        }
        int res = 0;
        for(int i=0; i<N; i++) {
            res += ans[i];
        }
        return res;
    }
};
