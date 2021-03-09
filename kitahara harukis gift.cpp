#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
		cin>>arr[i];
	int count100=0,count200=0;
	for(int i=0;i<n;++i)
	{
		if(arr[i]==100)
			count100++;
		else
		 	count200++;
		 		
	}
	int c1=count200%2;
	int c2=count100-(c1*2);
	if(c2>=0 and c2%2==0)
		cout<<"YES";
	else
		cout<<"NO";
}
