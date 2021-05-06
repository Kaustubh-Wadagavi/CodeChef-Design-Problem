#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int transition=0;
	    
	    for(int i=1; i<8; i++)
	    {
	        if(s[i-1]!=s[i])
	        {
	            transition++;
	        }
	    }
	    
	    if(transition>=3)
	    {
	        cout<<"non-uniform"<<endl;
	    }else
	    {
	        cout<<"uniform"<<endl;
	    }
	}
	return 0;
}
