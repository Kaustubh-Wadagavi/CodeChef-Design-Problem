#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main() 
{
	ll ans[1000001],i,a,b;
	ans[1]=1;
	
	for(i=2;i<=1e6;i++)
	{   a=(ans[i-1]%mod);
	    b=(i%mod);
	    ans[i]=(a+b+((a*b)%mod))%mod;
	}
	ll t,n;cin>>t;
	
	while(t--)
	{
	  cin>>n;
	  cout<<ans[n]<<endl;
	}
	return 0;
}
