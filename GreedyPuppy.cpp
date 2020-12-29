#include<iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,k,ans=0;
	    cin>>n>>k;
	    for(int i=1;i<=k;i++)
	    ans=max(ans,n%i);
	    cout<<ans<<endl;
	}
	return 0;
}
