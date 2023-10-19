class Solution {
public:
    map<int, string> hm;

    // void f(int i, int n, string& digits, vector<string>& ans, string& temp) {
    //     // base case
    //     if(i >= n) {
    //         ans.push_back(temp);
    //         return;
    //     }

    //     // recursive case
    //     int index = digits[i]-'0';
    //     string value = hm[index];
    //     for(auto& it: value) {
    //         temp.push_back(it);
    //         f(i+1, n, digits, ans, temp);
    //         temp.pop_back(); // backtrack
    //     }
    // }

    void f(int i, int n, string& digits, vector<string>& ans, string temp) {
        // base case
        if(i >= n) {
            ans.push_back(temp);
            return;
        }

        // recursive case
        string value = hm[digits[i]-'0'];
        for(auto& it: value) {
            f(i+1, n, digits, ans, temp + it);
        }
    }

    vector<string> letterCombinations(string& digits) {
        hm[2] = "abc";
        hm[3] = "def";
        hm[4] = "ghi";
        hm[5] = "jkl";
        hm[6] = "mno";
        hm[7] = "pqrs";
        hm[8] = "tuv";
        hm[9] = "wxyz";

        // tc -> #child^height * inputLength
        // n(length of long string ie pqrs) * 4^n
        // O(4^n)

        vector<string> ans;
        int n = digits.size();
        if(!n) return ans;
        string temp = "";
        f(0, n, digits, ans, temp);
        return ans;
    }
};