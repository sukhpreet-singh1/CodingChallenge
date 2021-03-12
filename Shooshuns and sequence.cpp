#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;++i)
		cin>>arr[i];
	int op=0;
	k--;
	for(int i=k;i<n;++i)
	{
		if(arr[i]!=arr[k])
		{
			cout<<"-1";
			return 0;			
		}
	}	
	int x=k-1;
	while(x>=0 && arr[x]==arr[k])
	{
		x--;
	}
	
	cout<<x+1<<endl;
}
