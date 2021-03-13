#include <bits/stdc++.h>
using namespace std;
int main()
{
	int y, k, n;
	cin>>y>>k>>n;
	int x= k- y%k;
	int t= n-y;
	if (x<=t)
	{
    		cout<<x<<endl;
    		x+=k;
    		while(x<=t)
    		{
        		cout<<x<<endl;
        		x+=k;
   		 }
	}
	else
        	cout<<-1<<endl;
    return 0;
    }
 
 
 
 
