#include<iostream>

using namespace std;

void printArray(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<< arr[i] <<" ";
    }
}



// vector<int> revArray(vector<int>&ans)
// {
// 	int start = 0;
// 	int end = ans.size() -1;
// 	while(end>start)
// 	{
// 		swap(ans[end--],ans[start++]);
// 	}
// 	return ans;
// }
// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
// 	// Write your code here.
// 	int i =n-1;
// 	int j =m-1;
// 	int carry =0;
// 	vector<int> ans;
// 	while(i>=0 && j>=0)
// 	{
// 		int val1 = a[i];
// 		int val2 = b[j];
// 		int sum = (val1 + val2)+carry;

// 		carry = sum/10;			//Main logic
// 		sum = sum %10;			//<-
// 		ans.push_back(sum);		//->
// 		i--;
// 		j--;
// 	}
// 	//if J==0 //case 1
// 	while(i>=0)
// 	{

// 		int sum = a[i]  +carry;

// 		carry = sum/10;		
// 		sum = sum %10;
// 		ans.push_back(sum);;
// 		i--;
// 	}
// 	//if i == 0 //case 2
// 	while(j>=0)
// 	{
// ;
// 		int sum = b[j] +carry;

// 		carry = sum/10;		
// 		sum = sum %10;
// 		ans.push_back(sum);
// 		j--;
// 	}
// 	//if carry is present 
// 	while(carry != 0)
// 	{
// 		int sum=carry;
// 		carry = sum/10;
// 		ans.push_back(sum);
		
// 	}
// 	return revArray(ans);
// }