class Solution {
public:
    int minProcessingTime(vector<int>& pt, vector<int>& tasks) {
        std::sort(pt.begin(), pt.end());
        std::sort(tasks.begin(), tasks.end(), greater<int>());
        int maxi_index = 0, ans = 0;
        for(int i=0; i<pt.size(); i++) {
            ans = std::max(ans, pt[i]+tasks[maxi_index]);
            maxi_index += 4;
        }
        return ans;
    }
};