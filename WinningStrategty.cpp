#include <bits/stdc++.h> 
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t-->0)
	{  long long sum1=0,sum2=0;
	    long long n;
	    cin>>n;
	    long long arr[n];
	    for(long long i=0;i<n;i++)
	    cin>>arr[i];
	    sort(arr,arr+n,greater<int>());

	    for(long long i=0;i<n;i++)
	    {
	        if(i==0)
	        {
	            sum1+=arr[i];
	        }
	        else if(i==1||i==2)
	        {
	            sum2+=arr[i];
	        }
	        else if(i%2!=0)
	        {
	            sum1+=arr[i];
	        }
	        else 
	        {
	            sum2+=arr[i];
	        }
	    }
        if(sum1>sum2)
        {
            cout<<"first\n";
        }
        else if(sum1<sum2)
        {
            cout<<"second\n";
        }
        else
        {
            cout<<"draw\n";
        }

	}
	return 0;
}