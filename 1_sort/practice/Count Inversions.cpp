// https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
class Solution {
public:
    long long inv;
    
    void merge(long long arr[], long long l, long long m, long long r) {
        long long n1 = m-l+1, n2 = r-m;
        long long A[n1], B[n2];
        for(long long i=0; i<n1; i++) A[i] = arr[l+i];
        for(long long i=0; i<n2; i++) B[i] = arr[(m+1)+i];
        long long i = 0, j = 0;
        while(i<n1 && j<n2) {
            if(A[i] <= B[j]) arr[l++] = A[i++];
            else {
                arr[l++] = B[j++];
                inv += n1-i;
            }
        }
        while(i < n1) arr[l++] = A[i++];
        while(j < n2) arr[l++] = B[j++];
    }
    
    void mergeSort(long long arr[], long long l, long long r) {
        if(l < r) {
            long long m = (l+r)/2;
            mergeSort(arr, l, m);
            mergeSort(arr, m+1, r);
            merge(arr, l, m, r);
        }
    }
    
    long long int inversionCount(long long arr[], long long N) {
        inv = 0;
        mergeSort(arr, 0, N-1);
        return inv;
    }
};