#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k;
	cin>>n>>k;
	long long int arr[n];
	long long int sum=0,mini=0;
	long long int index=1;
	for(long long int i=0;i<n;++i)
	{
		cin>>arr[i];
		sum+=arr[i];
		if(i<k)
		{
			mini=sum;
		}
		else
		{
			sum-=arr[i-k];
			if(mini>sum)
			{
				index=i-k+2;
				mini=sum;
			}
	
		}
		
	}	
	cout<<index;
}
