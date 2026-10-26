#include<iostream>
using namespace std;

int power(int num, int pow) {
    //base case
    if(pow == 0){
        return 1;
    }
    if(pow == 1) {
        return num;
    }
    int ans = power(num, pow/2);       //main logic
    //if power is even
    if(pow %2 == 0) {
        return ans * ans;   //main logic
    }
    //if power is odd
    else {
        return num * ans * ans; //main logic
    }
}
int main() {
    int num;
    cout<< "Enter a number:"<< endl;
    cin>> num;
    int pow;
    cout<<"Enter pow:"<< endl;
    cin>> pow;
    int ans = power(num, pow);
    cout<< "Answer is "<<endl <<ans;
    return 0;
}