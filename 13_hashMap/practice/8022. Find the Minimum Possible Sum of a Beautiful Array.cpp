class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        std::unordered_set<int> st;
        for(int i=1; st.size()<n; i++) {
            if(st.find(target-i) == st.end()) st.insert(i);
        }
        long long ans = 0;
        for(auto& it:st) ans += it;
        return ans;
    }
};