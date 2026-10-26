#include<iostream>
using namespace std;
        //Maximum occurring character
char getMaxOccurance(string s){
    int arr[26]= {0};       //26 index for 26 alphabet     //lecture 22(1:07:00)
    int number =0;   //for storing character
    for(int i=0; i<s.length(); i++)
    {
        //lower Case
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            number = s[i] - 'a';
        }
        else    //Upper Casee
        {
           number = s[i] - 'A'; 
        }
        arr[number]++;      //it count the no. of occurance & store Count in array
    }
    int max = -1, ans=0;    //ans(for storing max occur char index in array)
    for(int i =0; i<26; i++)
    {
        if (max < arr[i])
        {
            ans = i;        //store index where Maximum Count
            max = arr[i];
        }
    }
    
    return ans + 'a';
}

int main(){
    string s="";
    cout<< "Enter a string:"<<endl;
    cin>>s;
    cout<<"Maximum occurring character is: "<<getMaxOccurance(s);
}