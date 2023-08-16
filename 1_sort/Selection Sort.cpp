// https://practice.geeksforgeeks.org/problems/selection-sort/1#
void selectionSort(int arr[], int n) {
    // small ele gets position first at front
    for(int i=0; i<n; i++) {
        int mini_index = i;
        for(int j=i+1; j<n; j++) {
            if(arr[mini_index] > arr[j]) mini_index = j;
        }
        int temp = arr[mini_index];
        arr[mini_index] = arr[i];
        arr[i] = temp;
    }
}