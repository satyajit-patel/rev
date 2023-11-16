class Solution {
public:
    std::string s1, s2;
    std::vector<std::vector<int>> dp;

    int f(int i, int j) {
        // base case
        if(i >= s1.size()) return s2.size() - j;
        if(j >= s2.size()) return s1.size() - i;
        if(dp[i][j] != -1) return dp[i][j];

        // recursive case
        int mini = 1e8;
        if(s1[i] == s2[j]) mini = 0 + f(i+1, j+1);
        else {
            int ins = 1 + f(i, j+1);
            int del = 1 + f(i+1, j);
            int rep = 1 + f(i+1, j+1);
            mini = std::min(ins, std::min(del, rep));
        }

        // return case
        dp[i][j] = mini;
        return mini;
    } 

    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        if(!n) return m;
        if(!m) return n;
        s1.clear(), s1 = word1;
        s2.clear(), s2 = word2;
        dp.resize(n+1, std::vector<int>(m+1, -1));
        return f(0, 0);
    }
};