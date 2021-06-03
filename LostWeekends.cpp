#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	int t;
	cin>>t;
	while(t--)
	{
	    int a1,a2,a3,a4,a5,p;
	    cin>>a1>>a2>>a3>>a4>>a5>>p;
	    int s=a1+a2+a3+a4+a5;
	    s=s*p;
	    int mx=24*5;
	    if(s<=mx) 
	    {
	        cout<<"No"<<"\n";
	    }
	    else 
	    {
	        cout<<"Yes"<<"\n";
	    }
	}
	return 0;
}
