#include<iostream>
using namespace std;

void revString(string &s, int start, int end) {
    //base case
    if(start >= end){
        return ;
    }
    swap(s[start], s[end]);
    //recursive call
    revString(s, start +1, end -1); 
}
                /* reverse of string using Recursion*/
int main() {
    string s ="mapan";
    int st =0;
    int end =s.length() -1;
    revString(s, st, end);
     cout<< s <<endl;
    return 0;
}