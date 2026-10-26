#include<iostream>

using namespace std;
void printArray(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<< arr[i] <<" ";
    }
}
int main(){
    int arr[5] ={3,7,9,11,8};
    int k = 2;  // No. of time element place sift
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp[size]={0};
    for (int i=0; i<size; i++)
    {
        temp[(i+k)%size] = arr[i];  //main logic i+k)%size
    }

    printArray(temp,size);
}

