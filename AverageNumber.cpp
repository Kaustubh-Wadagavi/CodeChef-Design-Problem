#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    long int n,k,v,s=0;
	    cin>>n >>k >>v;
	    long int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        s=s+a[i];
	    }
	    long int x=((n+k)*v-s)%k;
	    if(x==0)
	    {
	        if(((n+k)*v-s)>0)
	        {
	            cout<<((n+k)*v-s)/k;
	        }
	        else
	        {
	            cout<<"-1";
	        }
	    }
	    else
	    {
	        cout<<"-1";
	    }
	    cout<<endl;
	}
	return 0;
}
