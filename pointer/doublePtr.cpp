#include<iostream>
using namespace std;

int main() {
    int i = 5;
    cout<< "i = "<< i<<endl;
    cout<<"&i = " << &i<< endl;

    int *ptr = &i;
    cout<< "*ptr = " <<*ptr << endl;
    cout<<"ptr = "<< ptr <<endl;
    cout<<"&ptr = "<< &ptr <<endl;
    
    int **ptr2 = &ptr;
    cout<< "**ptr2 = " << **ptr2 << endl;
    cout<<"*ptr2 = "<< *ptr2 <<endl;
    cout<< "ptr2 = "<< ptr2 <<endl;
    cout<< "&ptr2 = "<< &ptr2 <<endl;
    return 0;
}