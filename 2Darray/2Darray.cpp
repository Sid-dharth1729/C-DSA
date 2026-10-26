#include<iostream>
using namespace std;


        //for searching element in 2D array
bool isPresent(int arr[3][4], int target)
{
    for(int row = 0; row< 3; row++)  //rows
    {
        for (int col= 0; col< 4; col++)   //column
        {
            if(arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][4] ;
    // int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}}; //also can be declare like this
    // int arr[3][4] = {1,2,3,4,5,6,99,8,9,10,11,12};                //also can be declare like this in 1D form
    cout<<"Enter elements:" <<endl;
   //For row wise input
for (int row = 0; row< 3; row++)  //rows
    {
        for (int col= 0; col< 4; col++)   //column
        {
            
            cin>>arr[row][col];
        }
    }
        //For col wise input
    /*for (int col = 0; col< 4; col++)  //column
    {
        for (int row= 0; row< 3; row++)   //row
        {
            
            cin>>arr[row][col];
        }
    }*/
        //Printing matrix/ 2D array
        cout<<"2D array:" <<endl;
    for (int row = 0; row< 3; row++)  
    {
        for (int col= 0; col< 4; col++)
        {
           
            cout<<arr[row][col] << " ";
        }
        cout<<endl;
    }   
    int target;
    cout<<"enter target to search"<< endl;
    cin>> target;
    if (isPresent(arr,target))
    {
        cout<<"target found";
    }
    else{
        cout<<"target not found";
    }

    return 0;
}