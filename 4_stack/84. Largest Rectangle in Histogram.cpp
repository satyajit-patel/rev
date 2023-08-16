class Solution {
public:
    std::vector<int> getNse(std::vector<int>& A) {
        int n = A.size();
        std::vector<int> nse(n, -1);
        std::stack<int> st;
        for(int i=n-1; i>=0; i--) {
            // if smaller ele comes, then pop the rest
            while(!st.empty() && A[i] <= A[st.top()]) st.pop();
            if(!st.empty()) nse[i] = st.top();
            st.push(i);
        }
        return nse;
    }

    std::vector<int> getPse(std::vector<int>& A) {
        int n = A.size();
        std::vector<int> pse(n, -1);
        std::stack<int> st;
        for(int i=0; i<n; i++) {
            // if smaller ele comes, then pop the rest
            while(!st.empty() && A[i] <= A[st.top()]) st.pop();
            if(!st.empty()) pse[i] = st.top();
            st.push(i);
        }
        return pse;
    }

    int largestRectangleArea(vector<int>& heights) {
        int maxArea = INT_MIN;
        std::vector<int> nse = getNse(heights);
        std::vector<int> pse = getPse(heights);
        int n = heights.size();
        for(int i=0; i<n; i++) {
            int length = heights[i];
            if(nse[i] == -1) nse[i] = n; // if heights are same, then length == arr lenght
            int breadth = nse[i] - pse[i] - 1;
            int area = length * breadth;
            maxArea = std::max(maxArea, area);
        }
        return maxArea;
    }
};