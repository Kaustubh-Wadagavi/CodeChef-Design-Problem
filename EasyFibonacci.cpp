#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{

	int t;
	cin>>t;
	while(t--)
	{
	    ll int n;
	    cin>>n;
	    ll int z = log2((long double)n);
	    if(z==0)
	    {
	        cout<<0<<endl;
	    }
	    else if(z==1)
	    {
	        cout<<1<<endl;
	    }
	    else
	    {
	        int a = z%4;
            if(a==2)
            {
                cout<<"2"<<endl;
            }
            else if(a==3)
            {
                cout<<"3"<<endl;
            }
            else if(a==0)
            {
                cout<<"0"<<endl;
            }
            else if(a==1)
            {
                cout<<"9"<<endl;
            }
	    }
	}
	return 0;
}