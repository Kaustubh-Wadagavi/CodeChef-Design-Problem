#include <iostream>
using namespace std;

int main() 
{
    int n,k;
    cin>>n>>k;
    if(n<=k)
    {
      cout<<1;
    }
    else
    {
        long long a[n];
        for(int i=0;i<k;i++) a[i]=1;
        long long sum=k;
        a[k]=k;
        for(int i=k+1;i<n;i++)
        {
        	a[i]=(sum+a[i-1]-(a[i-k-1]))%1000000007;
        	sum=a[i];
    	}
        cout<<a[n-1]<<endl;
    }
	return 0;
}