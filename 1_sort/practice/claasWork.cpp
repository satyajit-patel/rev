#include<bits/stdc++.h>
using namespace std;

#define endl  "\n"
#define MOD   1000000007
#define int   long long int
 
#define vi    std::vector<int>
#define vc    std::vector<char>
#define vvi   std::vector<std::vector<int>>
#define vvc   std::vector<std::vector<char>>
 
#define VIS   std::unordered_map<int, int>
#define ADJ   std::unordered_map<int, std::unordered_set<int>>
 
// ------------------------------------------------

vc bubbleSort(vc arr, int n) {
    // big element gets position first at end
    int swap = 0, comp = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1-i; j++) {
            comp++;
            if(arr[j] > arr[j+1]) {
                swap++;
                std::swap(arr[j], arr[j+1]);
            }
        }
    }
    std::cout<<"bubble sort #swap = "<<swap<<endl;
    std::cout<<"bubble sort #comp = "<<comp<<endl;
    return arr;
}

vc selectionSort(vc arr, int n) {
    // small element gets position first at front
    int swap = 0, comp = 0;
    for(int i=0; i<n-1; i++) {
        int minIndex = i;
        for(int j=i+1; j<n; j++) {
            comp++;
            if(arr[minIndex] > arr[j]) minIndex = j;
        }
        if(minIndex != i) {
            swap++;
            std::swap(arr[i], arr[minIndex]);
        }
    }
    std::cout<<"selection sort #swap = "<<swap<<endl;
    std::cout<<"selection sort #comp = "<<comp<<endl;
    return arr;
}

vc insertionSort(vc arr, int n) {
    // playing card
    int swap = 0, comp = 0;
    for(int i=0; i<n; i++) {
        comp++;
        int cardIndex = i;
        while(cardIndex>=1 && arr[cardIndex-1]>arr[cardIndex]) {
            swap++;
            std::swap(arr[cardIndex-1], arr[cardIndex]);
            cardIndex--;
        }
    }
    std::cout<<"insertion sort #swap = "<<swap<<endl;
    std::cout<<"insertion sort #comp = "<<comp<<endl;
    return arr;
}

int _swap;
int comp;
void merge(vc& arr, int left, int mid, int right) {
    int n1 = mid-left+1;
    int n2 = right-mid;
    std::vector<int> A(n1), B(n2);
    for(int i=0; i<n1; i++) A[i] = arr[left+i];
    for(int i=0; i<n2; i++) B[i] = arr[(mid+1)+i];
    int i = 0, j = 0;
    while(i<n1 && j<n2) {
        comp++;
        if(A[i] <= B[j]) arr[left++] = A[i++];
        else {
            _swap++;
            arr[left++] = B[j++];
        }
    }
    while(i < n1) arr[left++] = A[i++];
    while(j < n2) arr[left++] = B[j++];
}

void mergeSort(vc& arr, int left, int right) {
    if(left < right) {
        int mid = (left+right)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

int partition(vc& arr, int L, int H) {
  int pivot = arr[L], i = L, j = H;
  while(i < j) {
    comp++;
    while(arr[i]<=pivot && i<H) i++;
    while(arr[j]>pivot && j>L) j--;
    if(i < j) {
        _swap++;
        std::swap(arr[i], arr[j]);
    }
  }
  std::swap(arr[L], arr[j]);
  return j;
}

void quickSort(vc& arr, int L, int H) {
    if(L < H) {
        int pivotsPosition = partition(arr, L, H);
        quickSort(arr, L, pivotsPosition-1);
        quickSort(arr, pivotsPosition+1, H);
    }
}


void input() {
    vc arr = {'s','a','t','y','a','j','i','t'};
    
    vc bs = bubbleSort(arr, arr.size());
    for(auto&it:bs) std::cout<<it;
    std::cout<<"\n\n";
    
    vc ss = selectionSort(arr, arr.size());
    for(auto&it:ss) std::cout<<it;
    std::cout<<"\n\n";
    
    vc is = insertionSort(arr, arr.size());
    for(auto&it:is) std::cout<<it;
    std::cout<<"\n\n";
    
    vc arr3 = arr;
    _swap = 0;
    comp = 0;
    quickSort(arr3, 0, arr3.size()-1);
    std::cout<<"quick sort #swap = "<<_swap<<endl;
    std::cout<<"quick sort #comp = "<<comp<<endl;
    for(auto& it:arr3) cout<<it;
    cout<<endl;
    
    vc arr4 = arr;
    _swap = 0;
    comp = 0;
    mergeSort(arr4, 0, arr4.size()-1);
    std::cout<<"merge sort #swap = "<<_swap<<endl;
    std::cout<<"merge sort #comp = "<<comp<<endl;
    for(auto& it:arr4) cout<<it;
    cout<<endl;
}
 
// ---------------------------------------------
signed main() {
  input();
  return 0;
}


// bubble sort #swap = 12   
// bubble sort #comp = 28   
// aaijstty

// selection sort #swap = 6 
// selection sort #comp = 28
// aaijstty

// insertion sort #swap = 12
// insertion sort #comp = 8 
// aaijstty

// quick sort #swap = 2
// quick sort #comp = 7
// aaijstty
// merge sort #swap = 6
// merge sort #comp = 16
// aaijstty