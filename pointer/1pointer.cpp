#include<iostream>
using namespace std;

int main() {
    int num = 5;
    // cout<< num <<endl;
    // adress of num - '&' operator
    cout<< "adress of num: " <<&num <<endl;

    //Pointer
    int *ptr = &num;
    cout<<"adress of num by pointer= "<< ptr <<endl; 
    cout<<"value of num= "<< *ptr <<endl; 

    double num2 = 9.8;
    double *p2 = &num2;
    cout<<"adress of double num= "<< p2 <<endl; 
    cout<<"value of double num= "<< *p2 <<endl; 

    //Size of pointer
    cout<<"size of pointer= "<< sizeof(p2) <<endl; 

    int num3 =9;
    int *ptt =0;    //giving 0 is compusalry--- (int *ptt;) is not valid
    ptt = &num3;
    cout<<"*ptt : " << *ptt <<endl;

    //&ptt != &nums
    cout<<"&ptt = "<< &ptt <<endl;
    cout<<"num3 = "<< &num3 <<endl;
    return 0;
}