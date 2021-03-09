#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
		cin>>arr[i];
	for(int i=0;i<n;++i)
		if(arr[i]==5 ||arr[i]==7)
		{
			cout<<"-1";
			return 0;
		} 	
	sort(arr,arr+n);
	for(int i=0;i<n;++i)
	{
		if(arr[i]!=0 && arr[i])
	}	
}
