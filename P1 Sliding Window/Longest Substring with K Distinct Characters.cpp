#include<iostream>
#include<iostream>
#include<map>

using namespace std;
/*
Given a string, find the length of the longest substring in it with no more than K distinct characters.

*/

int main()
{
	
	string  s="cbbebi";
	
	int k=3;
	int maxl=INT_MIN,j=0;
	int n=s.length();
	
	map<char,int> m;	

	char ch;
	
	for(int i=0;i<n;i++)
	{
	   ch=s[i];	
	   m[ch]++;
	   
	   while( m.size()>k)
	   {
		   	m[s[j]]--;
		   	if(m[s[j]]==0)
		   	m.erase(s[j]);
		   	j++;
	   }
	   maxl=max(maxl,i-j+1);
	}
	cout<<maxl;
}
