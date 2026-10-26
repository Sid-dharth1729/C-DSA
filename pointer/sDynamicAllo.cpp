#include<iostream>
using namespace std;

int getSum(int arr[], int n) {
    int sum = 0;
    for(int i =0; i<n; i++)
    {
        sum +=arr[i];
    } 
    return sum;
}

int main() {
    int n;
    cout<< "Enter size of array = " <<endl;
    cin>> n;

    //Variable size array or allocating dynamic memory
    int *arr = new int[n];
    for(int i =0; i<n; i++)
    {
        cin>> arr[i];
    } 
    cout<< "sum = "<< getSum(arr,n)<< endl;

    return 0;
}