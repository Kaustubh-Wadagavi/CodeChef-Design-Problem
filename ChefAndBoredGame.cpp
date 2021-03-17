#include<bits/stdc++.h>
using namespace std ;

int main()
{
	int t;
	cin>>t ;
	while(t--)
	{
	  int n,i,s=0;
	  cin>>n;
	  i=0;
	  while(i<n)
	  {
	  	s=s+(n-i)*(n-i);
	  	i=i+2;	
      }	
      cout<<s<<"\n";
	}
}
