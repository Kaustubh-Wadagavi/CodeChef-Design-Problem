#include <bits/stdc++.h>
using namespace std;
#define x 1000000007

int main()
{
	int t,n,i;
	long int a;
	long long int b,c,d;
	cin>>t;
	while(t--)
	{
		cin>>n;
	    cin>>a;
		b=2*a;
		c=0;
		d=2;
		for(i=1;i<=n;i++){
			cin>>a;
			c*=2;
			c+=b*a;
			c=c%x;
			b+=d*a;
			b%=x;
			d*=2;
			d%=x;
		}
		cout<<c<<endl;
	}
	return 0;
}
