#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	string s,h;
	getline(cin,s);
	getline(cin,h);
	map<char,int>arr;
	for(int i=0;i<s.size();++i)
	{
	    arr[s[i]]++;
	}
	for(int i=0;i<h.size();++i)
	{
	    arr[h[i]]--;
	    if(((h[i]>='a' && h[i]<='z')||(h[i]>='A' && h[i]<='Z')) && arr[h[i]]<0)
	    {
	        cout<<"NO";
	        return 0;
	    }
	}
	cout<<"YES";
	
}
