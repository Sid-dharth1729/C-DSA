#include<iostream>
using namespace std;

/*void printsumRow(int arr[][4], int row , int col){
        //row wise sum
    cout<<"row wise sum: "<< endl;
    for (int row = 0; row< 3; row++)  
    {
        int sum = 0;
        for (int col= 0; col< 4; col++)
        {
        
            sum += arr[row][col];
        }
        cout<<"Sum = "<< sum <<" ";
    } 
}   */

/*void printsumCol(int arr[][4], int row , int col){
    //column wise sum
cout<<endl <<"colimn wise sum: "<< endl;
for (int col= 0; col< 4; col++)  
{
    int sum = 0;
    for (int row= 0; row< 3; row++)
    {
    
        sum += arr[row][col];
    }
    cout<<"Sum = "<< sum <<" ";
} 
}*/

int maxSumRow(int arr[3][4], int row , int col)
{
    int maxi = INT8_MIN;
    int rowNum = -1;
    for (int row = 0; row< 3; row++)  
    {
        int sum = 0;
        for (int col= 0; col< 4; col++)
        {
        
            sum += arr[row][col];
        }
        if(sum > maxi )
        {
            maxi = sum;
            rowNum ++;
        }
    } 
    cout<<"Maximum Sum = "<< maxi <<endl;
    return rowNum;
}
int main(){
    int arr[3][4];
    cout<< "enter elements" <<endl;
    for (int row = 0; row< 3; row++)  //rows
    {
        for (int col= 0; col< 4; col++)   //column
        {
            
            cin>>arr[row][col];
        }
    }
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

    // printsumRow(arr, 3, 4);
    // printsumCol(arr, 3, 4);

    cout<< "Maximum sum is present at Row : "<<maxSumRow(arr, 3, 4) << endl;
    return 0;
}