#include<iostream>
using namespace std;

int main()
{
	
	int arr[]={2,1,5,2,3,2},Sum=7;
	int j=0;
	int n=sizeof(arr)/sizeof(arr[0]);
	int ans=INT_MAX,s=0;
	
	for(int i=0;i<n;i++)
	{
		s+=arr[i];
		while(s>=(Sum))
		{
			ans=min(ans,i-j+1);
			s-=arr[j];
			j++;
		}
	}
	cout<<ans;
}
