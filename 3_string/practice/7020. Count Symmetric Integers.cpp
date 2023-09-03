class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i=low; i<=high; i++) {
            std::string s = std::to_string(i);
            int numDigit = 0;
            for(auto& it:s) numDigit++;
            if(numDigit&1) continue;
            int half = numDigit/2;
            int sum1 = 0, sum2 = 0;
            for(int x=0; x<half; x++) sum1 = sum1 + (s[x] - '0');
            for(int x=numDigit-1; x>=half; x--) sum2 = sum2 + (s[x] - '0');
            if(sum1 == sum2) count++;
        }
        return count;
    }
};