#include<bits/stdc++.h>
using namespace std;
long long int sumdig(long long int n)
{
	long long int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int answer=0;
		while(answer<=1)
		{
			answer=__gcd(n,sumdig(n));
			n++;
		}
		cout<<n-1<<"\n";
		
	}
}
