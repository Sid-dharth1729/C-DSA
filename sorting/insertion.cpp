#include<iostream>
using namespace std;
        //Print Array
void printArray(int arr[], int size){
    for(int i =0; i < size; i++){
        cout<< arr[i] <<" ";
    }
}
        //Insertion Sort
        //BY FOR LOOP
void insertion(int arr[], int size){
    for(int i = 1; i< size; i++){
        int temp = arr[i];
        int j =i - 1;
        for(; j>=0; j--){
            if (arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
    printArray(arr, size);
}
        //BY WHILE LOOP
void whileinsertion(int arr[], int size){
    for(int i=1; i<size; i++){
        int temp = arr[i];
        int j= i-1;
        while (temp < arr[j]){
            arr[j +1] = arr[j];
            j--;
        }
        arr[j +1]= temp;
    }
    printArray(arr,size);
}

int main(){
    int arr[7] = {10,1,7,4,0,2,11};
    cout<<"sorted array "<< endl;
    insertion(arr, 7);
    cout<< endl <<"By while loop"<< endl;
    whileinsertion(arr, 7);   
}