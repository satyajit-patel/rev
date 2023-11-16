class Solution {
public:
    vector<int> diffWaysToCompute(string exp) {
        vector<int> ans;

        for(int i=0; i<exp.size(); i++) {
            char ch = exp[i];
            if(!std::isdigit(ch)) {
                vector<int> head = diffWaysToCompute(exp.substr(0, i));
                vector<int> tail = diffWaysToCompute(exp.substr(i+1));
                for(auto& left: head) {
                    for(auto& right: tail) {
                        if(ch == '+') {ans.push_back(left+right);}
                        else if(ch == '-') {ans.push_back(left-right);}
                        else {ans.push_back(left*right);}
                    }
                }
            }
        }

        if(ans.empty()) {ans.push_back(std::stoi(exp));}
        return ans;
    }
};