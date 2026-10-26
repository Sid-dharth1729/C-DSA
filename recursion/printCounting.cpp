#include<iostream>
using namespace std;

void print(int n) {
    //base case
    if(n==0){
        return;
    }

    //recursive relation
    print(n-1);

        //processing
    cout<<n <<endl;
}
int main() {
    int num;
    cin>>num;
    cout<<endl;
    print(num);
    return 0;
}