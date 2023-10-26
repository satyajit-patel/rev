class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& w) {
        vector<int> ans, prev;
        int k = 0;
        for(int i=0; i<w.size(); i++) {
            if(w[i] == "prev") {
                k++;
                if(k > prev.size()) {ans.push_back(-1);}
                else {ans.push_back(prev[prev.size()-k]);}
            }
            else {
                k = 0;
                int ele = std::stoi(w[i]);
                prev.push_back(ele);
            }
        }
        return ans;
    }
};