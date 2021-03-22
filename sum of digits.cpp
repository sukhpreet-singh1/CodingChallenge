#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=0;
	while(s.size()!=1)
	{
		int res=0;
		for(int i=0;i<s.size();++i)
		{
			res+=s[i]-'0';
		}
		s=to_string(res);
		count++;
	} 
	cout<<count;
	
}
