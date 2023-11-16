class Solution {
public:
    std::string s;
    int start_index, palindrome_size;
    std::vector<std::vector<int>> dp;

    bool isPalindrome(int i, int j) {
        // base case
        if(i >= j) return true;
        if(dp[i][j] != -1) return dp[i][j];

        // recursive case
        bool flag = false;
        if(s[i] == s[j]) flag = isPalindrome(i+1, j-1);

        // return case
        if(flag) {
            int cur_size = j-i+1;
            if(cur_size > palindrome_size) {
                palindrome_size = cur_size;
                start_index = i;
            }
        }
        dp[i][j] = flag;
        return flag;
    }

    string longestPalindrome(string& _s) {
        s.clear(), s = _s;
        int n = s.size();
        start_index = 0, palindrome_size = 1;
        dp.resize(s.size()+1, std::vector<int>(s.size()+1, -1));
        for(int i=0; i<n; i++) for(int j=i; j<n; j++) bool ans = isPalindrome(i, j);
        return s.substr(start_index, palindrome_size);
    }
};