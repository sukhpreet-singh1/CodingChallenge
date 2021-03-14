#include<bits/stdc++.h>
using namespace std;
long long int divisor(long long int n)
{
  	if(n==1)
    		return 1;
	long long int count=2;
	for(long long int i=2;i<=sqrt(n);++i)
	{
		if(n%i==0)
	    	count++;
	}
	return count;
}
int main()
{
	ios_base::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
	long long int a,b,c;
	cin>>a>>b>>c;
	long long int sum=0;
	long long int arr[a*b*c];
	long long int index=0;
	for(long long int i=1;i<=a;++i)
	{ 
		for(long long int j=1;j<=b;++j)
		{
			for(long long int k=1;k<=c;++k)
			{
				arr[index]=i*j*k;
				index++;				
			}
		}
		
	}
	for(long long int i=0;i<index;++i)
	{
		long long int d;
		d=divisor(arr[i]);
		sum+=d%1073741824; 
	}
	cout<<sum;
	
}
