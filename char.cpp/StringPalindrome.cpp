#include<iostream>
using namespace std;
//Main logic
class Solution {
private:
    //checking valid string and converting to lowercase if needed
    char isValid(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            return ch;
        } else if (ch >= 'A' && ch <= 'Z') {
            return ch - 'A' + 'a'; // Convert to lowercase
        } else {
            return '\0'; // Return null character for invalid characters
        }
    }

    // palindrome function
    bool checkPalindrome(string s) {
        int end = s.length() - 1;
        int start = 0;
        while (start < end) {
            if (s[start] != s[end]) {
                return false; // Return false directly
            } else {
                end--;
                start++;
            }
        }
        return true; // Return true directly
    }

public:
    bool isPalindrome(string s) {
        string ans = "";
        for (int i = 0; i < s.length(); i++) {
            char validChar = isValid(s[i]);
            if (validChar != '\0') { // Check if the character is valid
                ans.push_back(validChar);
            }
        }

        return checkPalindrome(ans); // No need for a separate toLowerCase loop as isValid handles it
    }
};