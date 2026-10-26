#include<iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    int pivot= arr[s];
    int count =0;


    for(int i=s+1; i<=e; i++) {
        if(pivot >= arr[i]) {
            count++ ;
        }
    }
    
    //right(sahi) index of pivot
    int pivotIdx = s +count;
    swap(arr[pivotIdx] , arr[s]);
    //placing (element < pivot at left) & (element > pivot at right)
    int i= s;
    int j = e;
    // while(i < pivotIdx && j > pivotIdx) {
    //     if(arr[i] > arr[j] && arr[j] < pivot) {
    //         swap(arr[i], arr[j] );
    //         i++;
    //         j--;
    //     }
    //     if(arr[i] < arr[j]) {
    //         i++;
    //     }
    //     else{
    //         j--;
    //     }

    // }
    while(i < pivotIdx && j > pivotIdx){
    while(arr[i] <= arr[pivotIdx]) {
        i++;
    }
    while(arr[j] > arr[pivotIdx]) {
        j--;
    }
    if(i < pivotIdx && j > pivotIdx) {
        swap(arr[i++], arr[j--]);
    }
}
    return pivotIdx;
}

void quickSort(int arr[], int s, int e) {
    //base case
    if(s >= e)
        return;
    
    //partition(pivot element which placed) index
    int p = partition(arr,s ,e);
    //for sorting left side
    quickSort(arr, s, p-1);
    //for sorting right side
    quickSort(arr, p+1, e);
}
int main() {
    int arr[6] ={3,4,2,5,7,1};
    int n= 6;
    int s =0;
    int e = n-1;
    quickSort(arr, s, e);

    for(int i= 0; i<n; i++) {
        cout<< arr[i] <<" ";
    }
    return 0;
}
