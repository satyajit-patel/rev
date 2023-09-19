class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        std::unordered_map<int, int> um;
        for(auto& it:nums) um[it]++;

        std::priority_queue<int> pq;
        for(auto& it:um) pq.push(it.second);

        while(pq.size() >= 2) {
            int freq1 = pq.top();
            pq.pop();
            int freq2 = pq.top();
            pq.pop();

            freq1--;
            freq2--;
            if(freq1) pq.push(freq1);
            if(freq2) pq.push(freq2);
        }
        return (!pq.empty()) ? pq.top() : 0;
    }
};