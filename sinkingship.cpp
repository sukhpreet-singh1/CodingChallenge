#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	map<string,string>mp;
	while(n--)
	{
		string name,post;
		cin>>name>>post;	
		mp[name]=post;
		
	}
	for(auto i:mp)
	{
		if(i.second=="rat")
			cout<<i.first<<endl;
			
	}
	for(auto i:mp)
	{
		if(i.second=="woman" || i.second=="child")
			cout<<i.first<<endl;
			
	}
	for(auto i:mp)
	{
		if(i.second=="man")
			cout<<i.first<<endl;
			
	}
	for(auto i:mp)
	{
		if(i.second=="captain")
			cout<<i.first<<endl;
			
	}
	
	
}
