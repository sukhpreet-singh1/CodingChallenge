#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int k;
	unordered_map<int,int>mp;
	for(int i=0;i<n;++i)
	{
		cin>>k;
		mp[k]++;	
	}	
	int l;
	if(n%2==0)
	    l=n/2;
	else
	    l=n/2+1;
	    
	for(auto i:mp)
	{
		if(i.second>l)
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
		
}
