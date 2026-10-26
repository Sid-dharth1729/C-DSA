#include<iostream>
using namespace std;

bool checkPalindrome(string s, int i , int j) {
                                        // int j = s.length() -1; {if we not j}
    //base case
    if(i >= j){
        return true;
    }
    if(s[i] != s[j]){
        return false;
    }
    else{
        //recursive call
        return checkPalindrome(s, i +1, j -1);
    }
}
int main() {
    string str = "abwtba";
    int start = 0;
    int end = str.length() -1;
    bool ans= checkPalindrome(str, start ,end);
    if(ans){
        cout<<"String is palindrome."<< endl;
    }
    else{
        cout<<"String is not palindrome" << endl;
    }
    return 0;
} 