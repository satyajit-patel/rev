class Solution {
public:
    string convertToTitle(int columnNumber) {
        std::string result = "";
        while(columnNumber) {
            char ch = (columnNumber - 1) % 26 + 'A';
            result = ch + result;
            columnNumber = (columnNumber - 1) / 26;
        }
        return result;
    }
};