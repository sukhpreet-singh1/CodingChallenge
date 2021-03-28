#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
	 	string s;
	 	cin>>s;
	 	char a=s[0];
	 	int counta=0;
	 	int countb=0;
	 	for(int i=0;i<s.length();++i)
	 	{
	 		if(s[i]==a)
	 		{
	 			s[i]='(';
	 			counta++;
			}
	 	}
	 	char b;
	 	for(int i=0;i<s.length();++i)
	 	{
	 		if(s[i]!='(')
	 		{
	 			b=s[i];
	 			break;	
	 		}
	 	}
	 	for(int i=0;i<s.length();++i)
	 	{
	 		if(s[i]==b)
	 		{
	 			s[i]=')';
	 			countb++;
	 		}
	 	}
	 	char c;
 	 	for(int i=0;i<s.length();++i)
 	 	{
 	 		if(s[i]!='(' && s[i]!=')')
 	 		{
	 			if(counta-countb>0)
	 			{
	 				s[i]=')';
	 			}
	 			else
	 			{	
	 				s[i]='(';
	 			}
	 		}	
	 	}
	 	int x=0;
	 	for(int i=0;i<s.length();++i)
	 	{
	 	    if(s[i]=='(')
	 	        x++;
	 	    if(s[i]==')')
	 	        x--;
	 	    if(x<0)
	 	        break;
	 	}
	 	if(x==0)
	 	    cout<<"YES\n";
	 	 else
	 	    cout<<"NO\n";
	}
}
