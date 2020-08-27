#include<iostream>
#include<map>
using namespace std;
/*
Given a string, find the length of the longest substring which has no repeating characters
*/

int main()
{
	
	string str="abcabcbb";

	int n=str.length();
	map<char,int>mp;
	int j=0,ans=0;
	
	for(int i=0;i<n;i++)
	{
		if(mp.find(str[i])!=mp.end())
        {
          j=max(j,mp[str[i]]+1);
        }
        mp[str[i]]=i;
		ans=max(ans,i-j+1);
	}
	cout<<ans;
}
