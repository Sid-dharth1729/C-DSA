#include<iostream>
using namespace std;

int main(){
    int arr[10]= {0,2,8, 9};
    cout<<"Address of 1st Block (by array name): "<< arr <<endl;
    cout<<"Address of 1st Block(by '&' operator) : "<< &arr[0] <<endl;
    //basic operations
    
    cout<<"Value of arr[0] : "<< *arr <<endl;
    cout<<"arr[0] + 1 : "<< *arr + 1 <<endl;
    cout<<"arr[1] : " << *(arr + 1) <<endl;

    //i[arr] = *(i + arr)
    int i = 3;
    cout<<"i[arr] = "<< i[arr] <<endl;  // i[arr] = *(i + arr) && *(arr+ i) = *(i + arr) So, i[arr] = arr[i]
    cout<<"arr[i] = "<< *(arr + i) <<endl;

    //Size of pointer
    int *ptr = &arr[0];
    cout<<"*ptr = "<< *ptr <<endl;
    cout<<"ptr =" << ptr<<endl;
    cout<<"size of arr = "<< sizeof(arr) <<endl;
    cout<<"size of &arr = "<< sizeof(&arr) <<endl;
    cout<<"size of ptr = "<< sizeof(ptr) <<endl;
    cout<<"size of *ptr = "<< sizeof(*ptr)  <<endl; //size of ptr will be same for int, float,char, etc.
    
    //  &arr[0] != &ptr
    cout<<"&arr = "<< &arr <<endl;
    cout<<"&ptr = "<< &ptr <<endl;

    //
    int tarr[10] ={2,4,9,10};
    // tarr = tarr + 1; // Error
    int *poin = tarr;
    cout<< "poin = "<< poin<< endl;
    cout<< "*poin =" <<*poin <<endl;
    poin = poin + 1;    //this is valid because poin points to tarr[1] block
    cout<<" now poin = " <<poin <<endl;
    cout<< "Now *poin = " <<*poin << endl;

    return 0;
}