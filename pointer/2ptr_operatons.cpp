#include<iostream>
using namespace std;

int main() {
    int num = 4, num1;
    num1 = num;
    cout<< "before = " <<num1 <<endl;
    num1++;
    cout<< "after = " <<num1 <<endl;

    int *ptr = &num;
    cout<< "before = " <<*ptr <<endl;
    (*ptr)++;
    cout<< "after = " <<*ptr <<endl;

    //Copying of pointer
    int *q = ptr;
    cout<< "Address : "<<q <<"-" <<ptr <<endl;
    cout<< "Value : "<<*q <<"-" <<*ptr <<endl;

    //Value increment
    int n= 3;
    int *pt = &n;
    cout<< "value before = " <<*pt <<endl;
    *pt = *pt + 1;
    cout<< "value after = " <<*pt <<endl;

    //Adress increment

    cout<< "address before = " <<pt <<endl;
    pt= pt +1;  //increments 4 bytes (int datatype)
    cout<< "address after = " <<pt <<endl;

    return 0;
}