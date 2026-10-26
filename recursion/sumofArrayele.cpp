#include<iostream>
using namespace std;

int getSum(int *arr, int size) {   //using pointer avoid coping (*arr){optional} 
    //base case
    if(size == 0){     //if array has 0 element
        return 0;
    }
    if(size == 1){     //if array has only 1 element
        return arr[0];
    }

    //recurive relation
    int sum = arr[0] + getSum(arr +1, size -1);
    return sum;
}
int main() {
    int arr[5] = {2,0, 0,0,0};
    int size = 5;
    int ans =getSum(arr, size);
    cout<<"Sum of elements in Array ="<<ans <<endl;
    return 0;
}