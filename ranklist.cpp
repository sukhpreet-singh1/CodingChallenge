#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	vector<pair<int,int>>ar;
	for(int i=0;i<n;++i)
	{
		int x,y;
		cin>>x>>y;
		ar.push_back(make_pair(x,y));
	}
	sort(ar,ar+ar.size());
	for(auto i :ar)
	cout<<ar[i][0]<<" "<<ar[i][1]<<endl;
	
	
}
