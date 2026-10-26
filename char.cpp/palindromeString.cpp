#include<iostream>
using namespace std;

//Getting Length
int getLength(char name[]){
    int count = 0;
    int i =0;
    while(name[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

// reverse of string
void revString(char name[]){
    int end = getLength(name) -1 ;
    int start = 0;
    while(start < end)
    {
       swap( name[start ++], name[end --]);
    }
    cout<< name << endl;
}

//for non case sensitive string
char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z')
    {
        return ch ;
    }
    else
    {
        char temp = ch - 'A' + 'a' ;
        return temp;
    }
}

    //Reverse of string //Main logic
bool palindrome(char name[]){
    int end = getLength(name) -1 ;
    int start = 0;
    while(start < end)
    {
       if (toLowerCase(name[start]) != toLowerCase(name[end]))
       {
        return 0;
       }
       else
       {
        end--;
        start++;
       }
    }
    return 1;
}

int main(){
    char name[20] ;
    cout << "Enter your Name: " << endl;
    cin >> name;

    cout<<"Reverse String :"<< endl;
    revString(name);

    cout<<"String is parlindrome :"<<palindrome(name) << endl;
    

    return 0;
}

