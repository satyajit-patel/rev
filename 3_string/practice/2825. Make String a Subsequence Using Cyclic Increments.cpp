class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i = 0, j = 0;
        while(i<str2.size() && j<str1.size()) {
            int curChar = str1[j] - 'a';
            int reqChar = str2[i] - 'a';
            if(curChar==reqChar || ((curChar+1)%26)==reqChar) i++;
            j++;
        }
        return i == str2.size();
    }
};