#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,k;
		cin>>n>>k;

		long long a[n],s;
		for(int i=0;i<n;i++)
			cin>>a[i];

		 s=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]<k)
			{
				s+=k-(a[i]%k);
			}
			else
			{
				s+=min(a[i]%k,k-(a[i]%k));
			}
		}

		cout<<s<<"\n";
	}
	return 0;
}
