#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[101]={0};
		for(int i=0;i<n;++i)
		{
			int x;
			cin>>x;
			a[x]++;
		}
		int count=n;
		while(count>0)
		{
			for(int i=0;i<101;++i)
			{
				if(a[i]!=0)
				{
					cout<<i<<" ";
					a[i]--; 
					count--;
				}
			}
			
		}
		cout<<"\n";
	}
	
}
