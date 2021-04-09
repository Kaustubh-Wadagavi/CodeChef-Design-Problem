#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int l;
	    cin>>l;
	    string s;
	    cin>>s;
	    string a="";
	    for(int i=0;i<l;i++)
	    {
	        if(s[i]=='H'||s[i]=='T')
	        {
	            a=a+s[i];
	        }
	    }
	    int n;
	    n=a.size();
	    if(n%2!=0)
	    cout<<"Invalid\n";
	    else
	    {
	        int k=n/2;
	        int c=0;
	        for(int i=0;i<n-1;i+=2)
	        {
	            if(a[i]=='H' && a[i+1]=='T')
	            c++;
	        }
	        if(c==k)
	        {
	            cout<<"Valid\n";
	        }
	        else
	        {
	            cout<<"Invalid\n";
	        }
	    }
	}
	return 0;
}
