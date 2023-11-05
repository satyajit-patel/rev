class Solution {
public:
    bool ismatch(char ch1, char ch2) {
        if(ch1 == '(' && ch2 == ')') {
            return true;
        }
        if(ch1 == '{' && ch2 == '}') {
            return true;
        }
        if(ch1 == '[' && ch2 == ']') {
            return true;
        }
        return false;
    }

    bool isopen(char ch) {
        if(ch == '(') {
            return true;
        }
        if(ch == '{') {
            return true;
        }
        if(ch == '[') {
            return true;
        }
        return false;
    }

    bool isValid(string str) {
        stack<char> s;
        for(int i=0; i<str.size(); i++) {
            char ch = str[i];
            if(isopen(ch)) {
                s.push(ch);
            }
            else if(s.empty() || !ismatch(s.top(), ch)) {
                return false;
            }
            else {
                s.pop();
            }
        }
        if(s.empty()) {
            return true;
        }
        return false;
    }
};