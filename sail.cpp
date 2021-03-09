#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,x1,y1,x2,y2;
	cin>>t>>x1>>y1>>x2>>y2;
	string s;
	cin>>s;
	long long int count=0;
	for(long long int i=0;i<s.size();++i)
	{
		long long int dx = x2 - x1;
        	long long int dy = y2 - y1;
		if (dx > 0 && s[i] == 'E') 
			x1++;
		if (dx < 0 && s[i] == 'W') 
			x1--;
		if (dy > 0 && s[i] == 'N') 
			y1++;
		if (dy < 0 && s[i] == 'S') 
			y1--;
	 	count++;
     	   	if (x1 == x2 && y1 == y2) 
     	   	{
        		cout<<count;
        		return 0;
        	}
	}
	cout<<"-1";
}
