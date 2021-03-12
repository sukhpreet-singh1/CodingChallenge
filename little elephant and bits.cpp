#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<s.size()-1;++i)
	{
		if(count==0 && s[i]=='0')
		{
			count=1;
		}
		else
		{
			cout<<s[i];
		}
	}
	if(count)
	cout<<s[s.size()-1];
}
