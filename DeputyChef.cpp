#include <iostream>

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int d[n];
	    for(int i=0;i<n;i++)
	    {
	    	cin>>a[i];
		}
		for(int i=0;i<n;i++)
	    {
	    	cin>>d[i];
		}
		int res=0;
		for(int i=0;i<n;i++)
		{
			int right=a[(i+1)%n];
			int left;
			if(i==0)
			{
				left=a[n-1];
				
			}
			else
			{
				left=a[i-1];	
			}
		  int a_power=left+right;
		  
		  if(a_power<d[i])
		  {
		  	
		  	res=max(res,d[i]);
		  }
			
		}
		if(res!=0)
		{
			cout<<res<<"\n";	
		}
		else
		{
	   cout<<"-1"<<"\n";
		}
	}
	return 0;
}
