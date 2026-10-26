#include<iostream>
using namespace std;

int main() {
    int row;
    cout<<"row = ";
    cin>> row;

    int **jagged = new int* [row];
    for(int i =0; i<row; i++)
    {
        jagged[i] = new int[row +i];
    }
     //taking input
    cout<<"enter elements "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<row +i; j++) //(j< i+2) -> it also can be happen for making jagged array {but in all j's loop}
        {
            cin>> jagged[i][j];
        }
    }

    //printing 2D array
        for(int i=0; i<row; i++)
    {
        for(int j=0; j<row + i; j++)
        {
            cout<< jagged[i][j] <<" ";
        }
        cout<<endl;
    }

    return 0;
}