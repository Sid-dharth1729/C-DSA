#include<iostream>
using namespace std;

int fib(int n)
{ // by recursion
    // base case
    if (n == 1 || n == 0)   //also can be "if(n<= 1)"
    {
        return n;
    }
    // recursive relation
    return (fib(n - 1) + fib(n - 2));
}

int byFor(int n){
    int f=0;
    int s=1;
    int ans;
       if (n == 1 || n == 0)
    {
        return n;
    }
    for(int i = 2; i<=n; i++){
        ans = f+ s;
        f =s;
        s= ans;
    }
    return ans;

}
int main() {
    int n;
    cout<<"enter fibonacci sequence no: " <<endl;
    cin>> n;

    cout<<"fibonacci number at "<<n <<" = "<<fib(n) <<endl;
    cout<<"fibonacci number at "<<n <<" (by for loop) = "<<byFor(n) <<endl;
    return 0;
}