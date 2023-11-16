// https://practice.geeksforgeeks.org/problems/insertion-sort/1#
void insertionSort(int arr[], int n) {
    // playing cards
    for(int i=0; i<n; i++) {
        int card = i;
        while(card>=1 && arr[card-1]>arr[card]) {
            int temp = arr[card-1];
            arr[card-1] = arr[card];
            arr[card] = temp;
            card -= 1;
        }
    }
}