#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cnt = 0;
	string s1, s2;
    	cin >> s1 >> s2;
    	bool ok = false;
    	if (s1.size() != s2.size())
   	{
        	cout << "NO" << endl;
       		return 0;
    	}
    	for (int i = 0; i < s1.size(); i++)
    	{
    		if (s1[i] != s2[i])
            	cnt++;
    	}
    	if (cnt==2)
   	{
        	ok = true;
    	}
   	else {
        	cout << "NO" << endl;
        	return 0;
    	}
    	for (int i = 0; i < s1.size(); i++)
    	{	
        	if (s1[i] == s2[i])
        	    continue;
        	else
        	{
        	    for (int j = i + 1; j < s1.size(); j++)
        	    {
        	        if (s1[j] != s2[j])
        	        {
        	            swap(s1[j], s1[i]);
        	            if (s1 == s2)
        	            {
        	                cout << "YES" << endl;
        	                return 0;
        	            }
        	            else {
        	                swap(s1[j], s2[j]);
        	                break;
        	            }
        	        }
        	   }
        	    
        	}
    }	
    cout<<"NO" << endl;
}		
