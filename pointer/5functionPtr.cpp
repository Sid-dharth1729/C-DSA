#include<iostream>
using namespace std;

void print(int *ptr) {
    ptr = ptr + 1;
}

void update(int *ptr) {
    *ptr = *ptr + 1;
}

void getSum(int arr[], int n) {
    int sum = 0;
    for (int i =0; i<n; i++)
    {
        sum += arr[i];
    }
    cout<< "Sum = "<< sum <<endl;
}
int main() {
    int a = 5;
    int *ptr = &a;
    // ptr = ptr + 1 operation in function 
    cout<<"(ptr = ptr + 1) in function......." << endl;
    cout<< "Before- ptr ="<< ptr <<endl;
    print(ptr);
    cout<< "After- ptr =" << ptr <<endl;        //No change in value address

    // *ptr = *ptr + 1 operation in function 
    cout<<"(*ptr = *ptr + 1) in function......" << endl;
    cout<< "Before- *ptr ="<< *ptr <<endl;
    update(ptr);
    cout<< "After-  *ptr =" << *ptr <<endl;         //value changed


    int arr[6] = {1,2,3,4,5,6};
    getSum(arr, 6);     //arr work as a point
    cout<< endl << "sum of last three of array"<< endl;
    getSum(arr +3, 3);      //conditon can be added while calling function

    return 0;
}