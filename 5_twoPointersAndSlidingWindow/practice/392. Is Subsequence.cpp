class Solution {
public:
    bool f(int n, int m, string& s, string& t) {
        // base case
        if(n < 0) return true;
        if(m < 0) return false;

        // recursive case
        if(s[n] == t[m]) return f(n-1, m-1, s, t);
        else return f(n, m-1, s, t);
    }

    bool isSubsequence(string& s, string& t) {
        // int i = 0, j = 0;
        // while(i<s.size() && j<t.size()) {
        //     if(s[i] == t[j]) i++;
        //     j++;
        // }
        // if(i == s.size()) return true;
        // return false;
        
        return f(s.size()-1, t.size()-1, s, t);
    }
};