#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	vector<int>a;
	vector<int>b;
	int count=0;
	int countodda=0;
	int countoddb=0;
	int ans;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		a.push_back(x);
		b.push_back(y);
		if(x%2==1)
			countodda++;
		if(y%2==1)
			countoddb++;
		if ((x%2==1&&y%2==0)||(x%2==0&&y%2==1))
            		count++;		
	}
	if((countodda+countoddb)%2==1)
	{
		cout<<-1;
	}
	else
	{	
		if(countodda%2==1)
		{
			if(count!=0)
			{
				cout<<1;
			}
			else
			{
				cout<<-1;
			}
		}
		else
		{	
			cout<<0;
		}
	}
	
}
