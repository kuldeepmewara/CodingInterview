#include<iostream>
#include<map>
using namespace std;
/*
Given a string with lowercase letters only, if you are allowed to replace no more than 
‘k’ letters with any letter, find the length of the longest substring having the same letters after replacement.


Input: String="aabccbb", k=2
Output: 5
Explanation: Replace the two 'c' with 'b' to have a longest repeating substring "bbbbb".

Input: String="abbcb", k=1
Output: 4
Explanation: Replace the 'c' with 'b' to have a longest repeating substring "bbbb".
*/

int main()
{
	
	string str="abab";

	int k=2;
	int n=str.length();
	int arr[26]={0},index=0,j=0,maxcount=0,ans=0;
	
	
	for(int i=0;i<n;i++)
	{
	 
	 index=str[i]-'a';
	 arr[index]++;
	 maxcount=max(maxcount,arr[index]);	
	 if(i-j-maxcount+1>k)
	 {
	 	arr[str[j]-'a']--;
	 	j++;
	 }
	 ans=max(ans,i-j+1);
	 
	}
	cout<<ans;
}
