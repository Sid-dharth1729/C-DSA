#include<iostream>
using namespace std;

void update(int **p) {
    // p = p + 1;  
    //No Change
    
    //*p = *p + 1;    
    //Only ptr change

     **p = **p + 1;
     //Value of i change

}
int main() {
    int i =7;
    int *ptr =&i;
    int **ptr2 = &ptr;
    cout<< "Before i = " << i <<endl;
    cout<< "Before ptr = " << ptr <<endl;
    cout<< "Before ptr2 = " << ptr2 <<endl;

    update(ptr2);
    cout<< "After i = "<< i <<endl;
    cout<< "After ptr = "<< ptr <<endl;
    cout<< "After ptr2 = "<< ptr2 <<endl;   
    return 0;
}