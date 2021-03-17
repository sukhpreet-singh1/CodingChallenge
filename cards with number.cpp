#include<bits/stdc++.h>
using namespace std;
int main()
{
        freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);	
	long long int n;
	cin>>n;
	int arr[2*n];
	unordered_map<int,vector<int>>mp;
	for(long long int i=0;i<2*n;++i)
	{
		cin>>arr[i];
		mp[arr[i]].push_back(i+1);
	}	
	for(auto i:mp)
	{
	    if(i.second.size()%2!=0)
	    {
	        cout<<"-1";
	        return 0;
	    }
	    else
	    {
	        for(int j=0;j<i.second.size();++j)
	        {
	            cout<<i.second[j]<<" "<<i.second[j+1]<<endl;
	            j++;
	        }     
	    }
	}
	
}
