class Solution {
public:
    int minBitFlips(int start, int goal) {
        // num_bit = log2(1e9) + 1;
        int data = start ^ goal;
        bitset<30> bs(data);
        // count() -> returns #set bits
        // to_string(data) -> returns string representation of data
        // to_ulong(data) -> returns integer representation of data
        int ans = bs.count();
        return ans;
    }
};