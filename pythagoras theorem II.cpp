#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int count=0;
    for(long long int i=3;i<n;i++)
    {
        for(long long int j=i;i*i+j*j<=n*n;j++)
        {
            float ans=i*i+j*j;
            long long int sqr_ans=(int)(sqrt(ans));
            if(sqr_ans*sqr_ans==ans)
                count++;
        }
    }
    cout<<count;
    return 0;
}
