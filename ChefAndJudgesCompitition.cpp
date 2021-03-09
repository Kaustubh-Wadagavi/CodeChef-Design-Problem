#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)\
	{
		int n;
		cin>>n;
		int a[n];
		int b[n];
		int x=0,sum=0;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			
		}
		for(int i=0; i<n; i++)
		{
			cin>>b[i];
			
		}
		sort(a,a+n);
		sort(b,b+n);
		for(int i=0; i<n; i++)
		{
		
			sum+=a[i];
		}
		for(int i=0; i<n; i++)
		{
			
			x+=b[i];
		}
		sum=sum-a[n-1];
		x=x-b[n-1];
		if(sum>x)
		{
			cout<<"Bob"<<endl;
		}
		else if(sum<x)
		{
			cout<<"Alice"<<endl;
		}
		else
		{
			cout<<"Draw"<<endl;
		}
	}
	return 0;
}