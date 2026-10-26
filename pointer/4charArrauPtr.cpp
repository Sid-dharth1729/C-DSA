#include<iostream>
using namespace std;

int main() {
    char ch[6] = "abcd";
    cout<< "ch ="<<ch <<endl;   //ch = abcd
    
    char *ptr = &ch[0];
    cout<< "ptr = " <<ptr << endl;  //ptr = abcd
    cout<< "*ptr = " << *ptr<< endl;
    return 0;
} 
