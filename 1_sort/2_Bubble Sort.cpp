// https://practice.geeksforgeeks.org/problems/bubble-sort/1#
void bubbleSort(int arr[], int n) {
    // big element gets position first at end
    for(int i=0; i<n; i++) {
        int swap = 0;
        for(int j=0; j<n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                swap += 1;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(swap == 0) return;
    }
}