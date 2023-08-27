class Solution {
public:
    string reorganizeString(string s) {
        // create freqMap -> create maxheap -> then take 2 ele each time
        std::unordered_map<char, int> hashMap;
        for(auto& it : s) hashMap[it]++;

        std::priority_queue<std::pair<int, char>> maxHeap;
        for(auto& it : hashMap) maxHeap.push({it.second, it.first});

        std::string ans = "";
        while(maxHeap.size() >= 2) {
            int freq1 = maxHeap.top().first;
            char ch1 = maxHeap.top().second;
            maxHeap.pop();

            int freq2 = maxHeap.top().first;
            char ch2 = maxHeap.top().second;
            maxHeap.pop(); 

            ans += ch1;
            ans += ch2;
            freq1--;
            freq2--;

            if(freq1 != 0) maxHeap.push({freq1, ch1});
            if(freq2 != 0) maxHeap.push({freq2, ch2});
        }
        if(!maxHeap.empty()) {
            char ch1 = maxHeap.top().second;
            int freq1 = maxHeap.top().first;
            maxHeap.pop();

            if(freq1 == 1) ans += ch1;
            else return "";
        }
        return ans;
    }
};