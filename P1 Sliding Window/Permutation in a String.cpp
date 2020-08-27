#include<iostream>
#include<map>
using namespace std;
/*
Given a string and a pattern, find out if the string contains any permutation of the pattern.

Input: String="oidbcaf", Pattern="abc"
Output: true
Explanation: The string contains "bca" which is a permutation of the given pattern.
*/

int main()
{
	
	string s="oidbcaf",pat="abc";
	int match=0,j=0;
	map<char,int>mp;
	bool ans=false;
		
	for(int i=0;i<pat.length();i++)
            mp[pat[i]]++;
           
	for(int i=0;i<s.length();i++)
	{
		if(mp.find((char)s[i])!=mp.end())
		{
			mp[s[i]]--;
			if(mp[s[i]]==0)
			{
				match++;
			}
		}
		
		
		if(match==(int)mp.size())
		{
			ans=true;
			break;
		}
		
		if(i>=(pat.length()-1))
		{
			if(mp.find(s[j])!=mp.end())
			{
				if(mp[s[j]]==0)
				{
					match--;
				}
				mp[s[j]]++;
			}
			j++;
		}
	}
	cout<<ans;
	
	
	
	
}
