#define vi vector<int>
class Solution {
public:
    // void f(int i, int N,vi& arr, vi& ans, int sum) {
    //     // base case
    //     if(i >= N) {
    //         ans.push_back(sum);
    //         return;
    //     }
        
    //     // recursive case
    //     f(i+1, N, arr, ans, sum+arr[i]);
    //     f(i+1, N, arr, ans, sum);
    // }
    
    void f(int i, int N,vi& arr, vi& ans, int& sum) {
        // base case
        if(i >= N) {
            ans.push_back(sum);
            return;
        }
        
        // recursive case
        sum += arr[i];
        f(i+1, N, arr, ans, sum);
        sum -= arr[i]; // backtrack
        
        f(i+1, N, arr, ans, sum);
    }

    vector<int> subsetSums(vector<int> arr, int N) {
        vi ans;
        int sum = 0;
        f(0, N, arr, ans, sum);
        return ans;
    }
};