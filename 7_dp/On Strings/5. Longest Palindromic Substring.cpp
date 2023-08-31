class Solution {
public:
    std::string s;
    bool isPalindrome(int i, int j) {
        while(i < j) if(s[i++] != s[j--]) return false;
        return true;
    }

    string longestPalindrome(string& _s) {
        s.clear(), s = _s;
        std::string ans = "";
        for(int i=0; i<s.size(); i++) {
            for(int j=i; j<s.size(); j++) {
                if(isPalindrome(i, j)) {
                    std::string palindromic = s.substr(i, j-i+1);
                    if(palindromic.size() > ans.size()) ans = palindromic;
                }
            }
        }
        return ans;
    }
};