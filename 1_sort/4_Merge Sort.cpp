// https://practice.geeksforgeeks.org/problems/merge-sort/1#
class Solution {
public:
    void merge(int arr[], int l, int m, int r) {
        int n1 = m-l+1, n2 = r-m;
        int A[n1], B[n2];
        for(int i=0; i<n1; i++) A[i] = arr[l+i];
        for(int i=0; i<n2; i++) B[i] = arr[(m+1)+i];
        int i = 0, j = 0;
        while(i<n1 && j<n2) {
            if(A[i] <= B[j]) arr[l++] = A[i++];
            else arr[l++] = B[j++]; // inv += A.size()-i;
        }
        while(i < n1) arr[l++] = A[i++];
        while(j < n2) arr[l++] = B[j++];
    }
    
    void mergeSort(int arr[], int l, int r) {
        if(l < r) {
            int m = (l+r)/2;
            mergeSort(arr, l, m);
            mergeSort(arr, m+1, r);
            merge(arr, l, m, r);
        }
    }
};