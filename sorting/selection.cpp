#include<iostream>
using namespace std;
    //printing array
void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<< arr[i]<<" ";
    }
}
    //selection sorting
void selection(int arr[], int size){
    for (int i=0; i<size -1; i++){
        int minIdx = i;     //taking index because idex will swap
        for(int j=i+1; j<size; j++){
            if(arr[minIdx] > arr[j]){
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
    printArray(arr, size);
}
int main(){
    int arr[6] = {3,6,1,8,3,10};
    cout<<"sorted array =";
    selection(arr, 6);   
}