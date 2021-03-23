#include<bits/stdc++.h>
using namespace std;
int main()
{
	char arr[8][8];
	int white=0;
	int black=0;
	int Q=9,R=5,B=3,N=3,P=1,k;
	for(int i=0;i<8;++i)
	{
		for(int j=0;j<8;++j)
		{
			cin>>arr[i][j];
			if(arr[i][j]>='A' && arr[i][j]<='Z')
			{
				if(arr[i][j]=='Q')
					white+=9;
				else if(arr[i][j]=='R')
					white+=5;
				else if(arr[i][j]=='B' || arr[i][j]=='N')
					white+=3;
				else if(arr[i][j]=='P')
					white+=1;	
				
			}
			if(arr[i][j]>='a' && arr[i][j]<='z')
			{
				if(arr[i][j]=='q')
					black+=9;
				else if(arr[i][j]=='r')
					black+=5;
				else if(arr[i][j]=='b' || arr[i][j]=='n')
					black+=3;
				else if(arr[i][j]=='p')
					black+=1;	
			}
		}
	}
	if(black>white)
	{
		cout<<"Black";
	}
	else if(black<white)
	{
		cout<<"White";
	}
	else
	{
		cout<<"Draw";
	}
}

