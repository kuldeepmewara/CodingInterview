#include<iostream>
#include<map>
using namespace std;
/*
Given an array containing 0s and 1s, 
if you are allowed to replace no more than ‘k’ 0s with 1s, 
find the length of the longest contiguous subarray having all 1s.

Input: Array=[0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1], k=2
Output: 6
Explanation: Replace the '0' at index 5 and 8 to have the longest contiguous subarray of 1s having length 6.
*/

int main()
{
	
	int arr[]={0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1}, k=2;
	int j=0,maxl=0,maxonecnt=0;
	int n=sizeof(arr)/sizeof(arr[0]);
	
	
	
	for(int i=0;i<n;i++)
	{
	  if(arr[i]==1) 
	  maxonecnt++;
	  
	  if(i-j-maxonecnt+1>k)
	  {
	  	if(arr[j]==1)
	  	 maxonecnt--;
	  	 
	  	 j++;
	  }
	  maxl=max(maxl,i-j+1);
	}
	cout<<maxl;
}
