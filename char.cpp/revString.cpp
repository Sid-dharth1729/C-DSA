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

    //Reverse of string //Main logic
void revString(char name[]){
    int end = getLength(name) -1 ;
    int start = 0;
    while(start < end)
    {
       swap( name[start ++], name[end --]);
    }
    cout<< name << endl;
}

int main(){
    char name[20] ;
    cout << "Enter your Name: " << endl;
    cin >> name;
    cout<<"Reverse String :"<< endl;
    revString(name);

    return 0;
}