#include<iostream>
using namespace std;

void print(int *arr, int size) {
    for(int i =0; i<size; i++) {
        cout<< arr[i] <<" ";
    }
}

void bsort(int *arr, int size) {
    //base case --Already sorted
    if(size == 0 || size == 1){
        return;
    }
    //move largest element to its place
    for(int i= 0; i<size -1 ; i++){
        if(arr[i] > arr[i+1]) {     //swapping logic
            swap(arr[i],arr[i+1]);
        }
    }
    //recursion call
    bsort(arr, size -1);
}
int main() {
    int arr[6] ={3,5,2,7,1,4};
    int size = 6;
    bsort(arr, size);
    print(arr, size);
    return 0;
}