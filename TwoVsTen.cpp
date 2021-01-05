#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,r;
		cin>>n;
		if(n%5!=0 && n%10!=0)
		{
			cout<<"-1"<<"\n";
		}
		else
		{
		    r=n%10;
		    if(r==5)
		    {
		        n=n*2;
		        if(n%10 == 0)
		        {
                    cout<<"1"<<"\n";
		        }
		    }
		else
			cout<<"0"<<"\n";
		}
	}
	return 0;
}		      