class Solution {
public:
    std::string s1, s2;
    std::vector<std::vector<int>> dp;

    bool isValid(int i, int j) {
        return i>=0 && j>=0 && i<s1.size() && j<s2.size();
    }

    int f(int n, int m) {
        // base case
        if(!isValid(n, m)) return 0;
        if(dp[n][m] != -1) return dp[n][m];

        // recursive case
        int maxi = 0;
        if(s1[n] == s2[m]) maxi = 1 + f(n-1, m-1);
        else {
            int case1 = f(n-1, m);
            int case2 = f(n, m-1);
            maxi = std::max(case1, case2);
        }

        // return case
        dp[n][m] = maxi;
        return maxi;
    }

    int longestPalindromeSubseq(string s) {
        s1 = s;
        std::reverse(s.begin(), s.end());
        s2 = s;
        dp.resize(s1.size()+1, std::vector<int>(s2.size()+1, -1));
        return f(s1.size()-1, s2.size()-1);
    }
};