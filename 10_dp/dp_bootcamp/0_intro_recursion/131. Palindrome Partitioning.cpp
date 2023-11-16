class Solution {
public:
    bool ispalindrome(int i, int j, string& s) {
        while(i < j) {
            if(s[i++] != s[j--]) {return false;}
        }
        return true;
    }

    void f(int i, string& s, vector<vector<string>>& ans, vector<string>& temp) {
        // base case
        if(i >= s.size()) {
            ans.push_back(temp);
            return;
        }

        // recursive case
        for(int j=i; j<s.size(); j++) {
            if(ispalindrome(i, j, s)) {
                temp.push_back(s.substr(i, j-i+1));
                f(j+1, s, ans, temp);
                temp.pop_back(); // backtrack
            }
        }
    }

    vector<vector<string>> partition(string& s) {
        vector<string> temp;
        vector<vector<string>> ans;
        f(0, s, ans, temp);
        return ans;
    }
};