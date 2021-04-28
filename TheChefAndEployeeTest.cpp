#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,mid;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
		    cin>>a[i];
		}
		sort(a,a+n);
		mid=(n+k+1)/2;
		cout<<a[mid-1]<<endl;
	}
	return 0;
}