class Solution {
public:
    void f(int index, string& digits, map<int, string>& hm, string& temp, vector<string>& ans) {
        // base case
        if(index >= digits.size()) {
            ans.push_back(temp);
            return;
        }

        // recursive case
        int digit = digits[index]-'0';
        string value = hm[digit];
        for(int i=0; i<value.size(); i++) {
            temp.push_back(value[i]);
            f(index+1, digits, hm, temp, ans);
            temp.pop_back(); // backtrack
        }
    }

    vector<string> letterCombinations(string& digits) {
        if(digits.empty()) {return {};}

        map<int, string> hm;
        hm[2] = "abc";
        hm[3] = "def";
        hm[4] = "ghi";
        hm[5] = "jkl";
        hm[6] = "mno";
        hm[7] = "pqrs";
        hm[8] = "tuv";
        hm[9] = "wxyz";

        string temp = "";
        vector<string> ans;
        f(0, digits, hm, temp, ans);
        return ans;
    }
};