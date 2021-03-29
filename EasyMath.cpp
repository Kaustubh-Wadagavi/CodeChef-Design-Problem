#include<bits/stdc++.h>
using namespace std;

int product(int x)
{
    int sum=0;
    while(x>0)
    {
        sum=sum+x%10;
        x=x/10;
    }
     return(sum);
}
int main() 
{
	long long int t,n,i,j,mul,ans=0,sum;
	cin>>t;
	while(t--)
	{   
	    ans=0;
	    cin>>n;
	    long long int a[100];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<n;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            mul=a[i]*a[j];
	            sum=product(mul);
	            ans=max(ans,sum);
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}