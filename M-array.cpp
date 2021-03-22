#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		map<int,int>a;
		for(int  i=0;i<n;++i)
		{
			int x;
			cin>>x;
			a[x%m]++;
		}
		int ans=0;
		for(auto i:a)
		{
			if(i.first==0 && i.second>0)
				ans++;
			else if(a.count(m-i.first)==0)
				ans+=i.second;
			else if(m-i.first==i.first)
				ans++;
			else if(m-i.first<i.first)
			{
				int x=i.second;
				int y=a[m-i.first];
				if(abs(x-y)<=1)
					ans++;
				else if(x>y)
				{
					x-=(y+1);
					ans++;
					ans+=x;
				}
				else
				{
					y-=(x+1);
					ans++;
					ans+=y;
				}	
			}			
		}
		cout<<ans<<endl;
		
	}
}
