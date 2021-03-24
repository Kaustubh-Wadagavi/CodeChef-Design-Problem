#include <iostream>
#include <bits/stdc++.h>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for( int i=0;i<t;i++)
	{
	   string s;
	   cin>>s;
	   int j,k=0,flag=0;
	   if(s[0]!=s[1])
	   {
	        for(j=2;j<s.length();j++)
	        {
	            if(s[j]!=s[k])
	            {
	                cout<<"NO\n";
	                flag=1;
	                break;
	            }
	            if(j%2==0)k=1;
	            else if(j%2!=0) k=0;
	        }
	        if(flag==0) cout<<"YES\n";
	   }
	   else cout<<"NO\n";
	   
	}
	return 0;
}