class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for(auto& it:columnTitle) {
            result *= 26;
            result += it - 'A' + 1;
        }
        return result;
    }
};