#include<iostream>
using namespace std;


void merge(int* arr, int s, int e) {
    
    int mid = (s+e) /2;
    int len1 = mid - s +1;
    int len2 = e - mid;

    int *leftArray = new int [len1];
    int *rightArray = new int [len2];

   
    //coping value
     int orgArrayidx = s;
    for(int i =0; i< len1; i++) {
        leftArray[i] = arr[orgArrayidx++]; 
    }
    orgArrayidx = mid +1; 
    for(int i =0; i< len2; i++) {
        rightArray[i] = arr[orgArrayidx++]; 
    }
    
    //merging 2 array with sorting
    int rightidx =0;
    int leftidx = 0;
    orgArrayidx = s;
    while(leftidx < len1 && rightidx <len2){
        if(leftArray[leftidx] < rightArray[rightidx] ){
            arr[orgArrayidx++] = leftArray[leftidx++];
        }
        else {
            arr[orgArrayidx++] = rightArray[rightidx++];
        }
 
    }
    while(leftidx < len1) {     //if rigth array element completed 
        arr[orgArrayidx++] = leftArray[leftidx++];
    }
    while(rightidx < len2) {     //if left array element completed 
        arr[orgArrayidx++] = rightArray[rightidx++];
    }

    //deleting dyanamic memory
    delete []leftArray;     
    delete []rightArray;
}

void mergeSort(int *arr, int s, int e) {
      //base case
    if(s >= e){
        return;
    }
    int mid = (s+e) /2;
    //left half
    mergeSort(arr, s, mid);
    //right half
    mergeSort(arr, mid +1, e);
    //merging sorted arrays
    merge(arr, s, e);
                                 // striverMerge(arr, s, e);
  
}
int main() {
    int arr[6] ={7,4,2,8,10,1};
    int size = 6;
    mergeSort(arr, 0, size-1);
    for(int i=0; i<size; i++) {
        cout<<arr[i] <<" ";
    }
    cout<< endl;
    return 0;
}



//STRIVER Apporach
// void striverMerge(int *arr, int s, int e){
//     int mid = (s+e) /2;
//     int left =s;
//     int right = mid +1;
//     vector<int> temp;
//     while(left <=mid && right <=e) {
//         if(arr[left] < arr[right]) {
//             temp.push_back == arr[left++]; 
//         }
//         else{

//             temp.push_back == arr[right++]; 
//         }
//     }
//     while(left <=mid) {
//         temp.push_back == arr[left++];
//     }
//     while(right <=e)
//     {
//         temp.push_back == arr[right++];
//     }
//     for(int i=s; i<e; i++) {
//         arr[i] = temp[i];
//     }
// }