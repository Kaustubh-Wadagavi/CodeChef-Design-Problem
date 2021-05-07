#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
	cin>>s;
	int a=0,b=0,c=0,d=0;
	for(int i=0;i<s.length();i++)
	{
	    if(s[i]=='C')
	    {
	        a++;
	    }
	    else if(s[i]=='H')
	    {
	        if(a>0)
	        {
	            a--;
	            b++;
	        }
	    }
	    else if(s[i]=='E')
	    {
	        if(b>0)
	        {
	            b--;
	            c++;
	        }
	    }
	    else if(s[i]=='F')
	    {
	        if(c>0)
	        {
	            c--;
	            d++;
	        }
	    }
	}
	cout<<d<<endl;
	return 0;
}
