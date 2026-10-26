#include<iostream>
using namespace std;

int factorial(int num) {
    //base case
    if(num == 0)
    {
        return 1;
    }
    //recursive relation
    return num* factorial(num-1);
}
int main() {
    int num;
    cout<<"enter num = "<<endl;
    cin>> num;
    cout<<"factorial =" <<factorial(num) <<endl;
    return 0;
}