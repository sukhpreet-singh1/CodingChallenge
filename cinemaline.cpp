#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>a;
	for(int i=0;i<n;++i)
	{
		int x;
		cin>>x;
		a.push_back(x);
	}
	int a25=0;
	int a50=0;
	int a100=0;
	if(a[0]!=25)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	else
	{
		for(int i=0;i<n;++i)
		{
			if(a[i]==25)
				a25++;
			if(a[i]==50 && a25!=0)
			{
				a50++;
				a25--;
			}	
			if(a[i]==100 && (a50>0 && a25>0))
			{
				a100++;
				a50--;
				a25--;	
			}
			if(a[i]==100 && (a50==0 && a25>2))
			{
				a100++;
				a25-=3;
			}
			else
			{
				cout<<"NO"<<endl;
				return 0;
				
			}
					
		}
	}
	cout<<"YES"<<endl;
}
