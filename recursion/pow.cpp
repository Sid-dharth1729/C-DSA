#include<iostream>
using namespace std;
int Pow(int n, int m) {
    //base case
    if (m==0)
        return 1;
    //recursive relation   
    return n* Pow(n, m-1);
}

int main() {
    int n, m;
    cout<<"enter n="<< endl;
    cin>>n;
    cout<<"enter power="<< endl;
    cin>> m;
    cout<<"answer = "<<Pow(n, m)<< endl;
    return 0;
}