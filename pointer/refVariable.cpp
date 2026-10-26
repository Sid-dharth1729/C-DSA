#include <iostream>
using namespace std;

void update(int &n) {   //Pass by reference ->(&n)  //n is global
    n++;
}

void update1(int n) {   //Pass by value ->(n)    //n scope is local
    n++;
}

int main() {
   /* int i = 5;
    int &j = i;         //j is a reference variable //Same memory Different names like are names(i,j)

    cout<< "i = "<< i <<endl;
    i++;
    cout<< "i = "<< i <<endl;
    j++;
    cout<< "i = "<< i <<endl;
    cout<< "j = "<< j <<endl;
    */

    int i = 4;
    cout<< "Before i = "<< i <<endl;
    update(i);
    cout<< "After i = "<< i<< endl;

    return 0;
}