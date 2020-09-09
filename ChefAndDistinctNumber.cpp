#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,i,m=0,k;
		cin>>n;
		long long int b[n];
		for(i=0;i<n;i++)
		{
			cin>>b[i];	
		}
		sort(b,b+n);
		for(i=1;i<n;i++)
		{
			if(b[i]==b[i-1])
			{
				m=1;
				break;
			}
		}
		if(m==1)
		cout<<"Yes\n";
		else
		cout<<"No\n";
	}
	
	return 0;
}
