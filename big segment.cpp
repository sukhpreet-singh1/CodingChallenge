#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	vector<int,int>m;
	vector<int>ar;
	for(int i=0;i<n;++i)
	{
		int a,b;
		cin>>a>>b;
		m[a]=b;
		ar.push_back(abs(a-b));
		
	}
	for(int i=0;i<ar.size();++i)
	cout<<ar[i]<<"\n";	
}
