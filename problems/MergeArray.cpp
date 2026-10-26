#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<< arr[i] <<" ";
    }
}

void mergeArray(int arr1[], int m, int arr2[], int n, int arr3[]){
    int i= 0, j=0;
    int k =0;
    while(i< m && j< n)
    {
        if (arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;        //shortcut in line 21
            i++;
        }
        else{
            arr3[k++] = arr2[j++] ;     //SHORTCUT FOR j++ & k++
        }

    }
    while(i< m){
        arr3[k++] = arr1[i++];
    }
    
    while(j < n){
        arr3[k++] = arr2[j++];
    }

    printArray(arr3, m+n);
}

int main(){
    int arr1[5] ={1,5,7,8,9};
    int m = 5;
    int arr2[3]= {2,4,6};
    int n =3;
    int arr3[m+n]={0};

    mergeArray(arr1, m, arr2, n, arr3);
}