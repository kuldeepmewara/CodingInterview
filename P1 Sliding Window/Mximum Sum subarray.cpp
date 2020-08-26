#include<iostream>
using namespace std;

int main()
{
	
	int arr[]={2,3,4,1,5},k=2;
	int j=0;
	int n=sizeof(arr)/sizeof(arr[0]);
	int ans=INT_MIN,s=0;
	for(int i=0;i<n;i++)
	{
		s+=arr[i];
		if(i>=(k-1))
		{
			ans=max(ans,s);
			s-=arr[j];
			j++;
		}
	}
	cout<<ans;
}
