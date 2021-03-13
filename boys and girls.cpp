#include<bits/stdc++.h>
using namespace std;
int main()
{
	    int n,m;
	    freopen("input.txt", "r", stdin);
    	    freopen("output.txt", "w", stdout);
   	    cin>>n>>m;
	    int a;
	    if(n>m)
	    {
		a=n-m;
		for(int i=0;i<m;i++)
		{
		    cout<<"BG";
		}
		for(int i=0;i<a;i++)
		{
		    cout<<"B";
		}
	    }
	    else
	    {
		a=m-n;
		for(int i=0;i<n;i++)
		{
		    cout<<"GB";
		}
		for(int i=0;i<a;i++)
		{
		    cout<<"G";
		}
	    }
	 
	    cout<<endl;
		
}
