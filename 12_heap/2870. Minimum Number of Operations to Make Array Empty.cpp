class Solution {
public:
    vector<int> v;
    void preCompute() {
        for(int i=2; i<=1e6; i*=2) v.push_back(i);
    }

    int ispower_of_2(int ele) {
        return std::binary_search(v.begin(), v.end(), ele);
    }

    int minOperations(vector<int>& nums) {
        map<int, int> hm;
        for(auto& it:nums) hm[it]++;
        /*
            1 -> 1
            2 -> 3
            3 -> 2

            3,2,1
            2,1
            1
        */
        int opr = 0;
        priority_queue<int> pq;
        for(auto& it:hm) pq.push(it.second);        
        preCompute();
        while(!pq.empty()) {
            int ele = pq.top();
            pq.pop();
            bool flag = false;
            if(ispower_of_2(ele) && ele >= 2) {
                opr++;
                ele -= 2;
                if(ele) pq.push(ele);
                flag = true;
            }
            else if(ele >= 3) {
                opr++;
                ele -= 3;
                if(ele) pq.push(ele);
                flag = true;
            }
            if(flag == false) {
                pq.push(ele);
                break;
            }
        }
        if(!pq.empty()) return -1;
        return opr;
    }
};