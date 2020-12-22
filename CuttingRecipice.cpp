#include <iostream>
#include<algorithm>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],ans;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        
	    }
	    int num=a[0];
	    for(int i=0;i<n;i++)
	    {
	        num=__gcd(a[i],num);
	    }
	    for(int i=0;i<n;i++)
	    {
	       
	        if(a[i]%num==0)
	        {
	            ans=a[i]/num;
	        }
	        else
	        {
	            ans=a[i];
	        }
	       cout<<ans<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}

