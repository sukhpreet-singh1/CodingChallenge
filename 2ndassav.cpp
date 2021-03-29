#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
        cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,W;
		cin>>n>>W;
		vector<int> arr;
		int x;
		for(int i=0;i<n;++i)
		{
			
			cin>>x;
			arr.push_back(x);
		}
		sort(arr.begin(),arr.end());
		int height=0;
		int elements=0;
		while(elements<n)
		{
			int sum=0;
			for(int i=arr.size()-1;i>=0;i--)
			{
				if(sum+arr[i]<=W)
				{
				   
					sum+=arr[i];
					elements++;
				    arr.erase(arr.begin()+i);
				}				
			}
			
			height++;
		}	
		cout<<height<<"\n";
		
	}
}
