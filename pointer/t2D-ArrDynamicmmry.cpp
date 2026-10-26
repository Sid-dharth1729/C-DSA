#include<iostream>
using namespace std;

int main() {
    int row, col;
    cout<<"row = ";
    cin>>row ;
    cout<<"col = ";
    cin>>col;

    //Creation of 2D array dymanic memory allocation
    int **arr = new int* [row];     //row memory allocation
    for(int i= 0; i< col; i++)
    {
        for(int j=0; j<col; j++)
        {
            arr[i] = new int[col];      //column memory allocation
        }
    }

    //taking input
    cout<<"enter elements "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>> arr[i][j];
        }
    }

    //printing 2D array
        for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<< arr[i][j] <<" ";
        }
        cout<<endl;
    }

    //releasing memory
    for (int i=0; i<row; i++){
        delete []arr[i];
    }
    delete []arr;
    return 0;
}