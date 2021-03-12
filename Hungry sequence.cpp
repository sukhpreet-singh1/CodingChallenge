#include<bits/stdc++.h>
#define max 10000000
using namespace std;
void SieveOfEratosthenes(int n)
{
    int count=0;
    bool prime[max + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= max; p++)
    {
        if (prime[p] == true) 
        {
            for (int i = p * p; i <= max; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= max; p++)
        if (count!=n && prime[p])
        {
            cout << p << " ";
            count++;
        }    
}
 
int main()
{
	int n;
	cin>>n;
	SieveOfEratosthenes(n);
}
