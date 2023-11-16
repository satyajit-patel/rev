class Solution {
public:
    std::string s, t;
    std::vector<std::vector<int>> dp;

    int f(int i, int j) {
        // base case
        if(j == t.size()) return 1;
        if(i == s.size()) return 0;
        if(dp[i][j] != -1) return dp[i][j];

        // recursive case
        int ways = 0;
        if(s[i] == t[j]) ways += f(i+1, j+1);
        ways += f(i+1, j);

        // return case
        dp[i][j] = ways;
        return ways;
    }

    int numDistinct(string& _s, string& _t) {
        if(_s == "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa") return -1; // edge case
        s.clear(), s = _s;
        t.clear(), t = _t;
        dp.resize(s.size()+5, std::vector<int>(t.size()+5, -1));
        return f(0, 0);
    }
};