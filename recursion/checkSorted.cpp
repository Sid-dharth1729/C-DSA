#include<iostream>
using namespace std;
            //To Check Array is Sorted or Not

bool checkSort(int arr[], int size) {    //My approach (complicate maybe)
    //base case
    if(size == 0 || size == 1){
       return true;
    }
    if(arr[size] < arr[size -1]){
        return false;
    }
    //recursion relation
    return checkSort(arr, size-1);  // it check array index -> ( size to 0)

  
}
bool checkSorted(int arr[], int size) {  //main approach
    if(size == 0 || size == 1)     //is array has 0 or 1 element
    {
        return true;
    }
    if(arr[0] > arr[1]){
        return false; 
    }
    else{
        return checkSorted(arr + 1, size -1); // it check array index -> (0 to size)
    }
}

int main() {
    int arr[5] ={1,2,9,4,5};
    int size = 5;
    //My approach
    cout<<"My approach"<< endl;
    int ans = checkSort(arr, size);
    if (ans){
        cout<<"Array is sorted "<<endl;
    }
    else{
        cout<<"Array is not sorted"<< endl;
    }
    cout<<endl;
    //Second approach
    cout<<"Second approach"<< endl;
    int ans2 = checkSorted(arr, size);
    if (ans2){
        cout<<"Array is sorted "<<endl;
    }
    else{
        cout<<"Array is not sorted"<< endl;
    }

    return 0;
}