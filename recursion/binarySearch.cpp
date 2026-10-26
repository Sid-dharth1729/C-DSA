#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e,int key) {
    
    
    //base case
    if(s > e) {     //element not found
        return false;
    }
    
    int mid = s + ( e - s)/ 2;  //for reducing overflow

    if(arr[mid] < key){
        return binarySearch(arr, mid+1 , e , key);
    }
    if(arr[mid] > key){
        return binarySearch(arr, s, mid - 1, key);
    }
    else{
        return true;       //element found
    }
}
int main() {
    int arr[5] ={1,2,3,5,6};
    int st = 0;
    int end = 4;
    int key = 4;
    bool ans = binarySearch(arr, st, end, key);
    if(ans){
        cout<<"key is present "<< endl;
    } 
    else {
        cout<<"key is not present" <<endl;
    }
    return 0;
}