
class Solution {
public:
    string s1, s2;
    vector<vector<int>> dp;

    bool state(int n, int m) {
        // base case
        if(n < 0 && m < 0) {
            return true;
        }
        if(n < 0 && m >= 0) {
            return false;
        }
        if(n >= 0 && m < 0) {
            for(int i=0; i<n; i++) {
                if(s1[i] != '*') {
                    return false;
                }
            }
            return true;
        }
        if(dp[n][m] != -1) {
            return dp[n][m];
        }
        
        // transition
        bool head = false, tail = false;
        if(s1[n] == s2[m] || s1[n] == '?') {
            head = state(n-1, m-1);
        }
        if(s1[n] == '*') {
            tail = state(n, m-1) || state(n-1, m);
        }
        bool ans = head || tail;
        dp[n][m] = ans;
        return ans;
    }

    bool match(string& wild, string& pattern) {
        s1.clear(), s1 = wild;
        s2.clear(), s2 = pattern;
        dp.resize(s1.size()+1, vector<int>(s2.size()+1, -1));
        int ans = state(s1.size()-1, s2.size()-1);
        return ans;
    }
};