#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int u=0,l=0,c=0;
	    
	    string s;
	    cin>>s;
	    char ch;
	    for(int i=0;i<n;i++)
	    {
	        ch=s[i];
	    c=(int)ch;
	    if(c>=65 && c<=90)
	    u++;
	    else
	    l++;
	   }
	    
	   if(l==u)
	   {
	       if(k>=u)
	       cout<<"both\n";
	        else if(k<u)
	       cout<<"none\n";
	   }
	   else if(l>u)
	   {
	       if(k>=l)
	        cout<<"both\n";
	        else if(k<u)
	        cout<<"none\n";
	        else
	        cout<<"chef\n";
	   }
	   else if(u>l)
	   {
	       if(k>=u)
	        cout<<"both\n";
	       else if(k<l)
	       cout<<"none\n";
	       else
	       cout<<"brother\n";
	   }
	}
	
	return 0;
}
