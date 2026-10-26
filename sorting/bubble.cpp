#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout<< arr[i] <<" ";
    }
}
        //BUBBLE SORT
void bubbleSort(int arr[], int size){
    for(int i=0; i <size-1; i++){
        for(int j= 0; j <size - i; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j] ,arr[j + 1] );
            }
        }
    }
    printArray(arr, size);
}

int main(){
    int arr[6] = {10, 1, 7, 6, 14, 9};
    bubbleSort(arr, 6);
}