#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<< arr[i] <<" ";
    }
}

void revArray(int arr[], int size){
    int end = size -1;
    int start =0;
    while(end > start)
    {
        int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        swap(arr[end],arr[start]);

        end--;
        start++;
    }
    printArray(arr, size);
}


int main(){
    int arr[6] ={3,5,2,7,10,9};
    int size = 6;

    revArray(arr, size);
}