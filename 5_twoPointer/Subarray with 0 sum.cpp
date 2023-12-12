
class Solution {
public:
    bool subArrayExists(int arr[], int n) {
        for(int i=0; i<n; i++) {
            if(arr[i] == 0) {
                return true;
            }
        }
        int sum = 0;
        unordered_set<int> moye_moye;
        for(int i=0; i<n; i++) {
            sum += arr[i];
            if(moye_moye.count(sum) || sum == 0) {
                return true;
            }
            moye_moye.insert(sum);
        }
        return false;
    }
};