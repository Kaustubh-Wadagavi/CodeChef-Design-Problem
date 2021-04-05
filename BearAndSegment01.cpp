#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
	int t, flag=1;
	ll n,check,c,i;
	string str;
	cin >> t;
	while(t--)
	{
	    cin >> str;
	    check=c=0;
	    n=str.size();
	    for(i=0;i<n;i++)
	    {
	        if(str[i]=='1')
	        {
	            c++;
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        if(str[i]=='1')
	        {
	            check++;
	        }
	        if(check>0 and str[i]=='0')
	        {
                flag=0;
                break;
	        }
	    }
	    if(check==c and c!=0) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
