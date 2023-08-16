// https://practice.geeksforgeeks.org/problems/quick-sort/1#
class Solution {
public:
    int partition (int arr[], int low, int high) {
       int pivot = low;
       while(low < high) {
           while(arr[low] <= arr[pivot]) low += 1;
           while(arr[high] > arr[pivot]) high -= 1;
           if(low < high) std::swap(arr[low], arr[high]);
       }
       std::swap(arr[pivot], arr[high]);
       return high;
    }
    
    void quickSort(int arr[], int low, int high) {
        if(low < high) {
           int pivot = partition(arr, low, high);
           quickSort(arr, low, pivot-1);
           quickSort(arr, pivot+1, high);
       }
    }
};