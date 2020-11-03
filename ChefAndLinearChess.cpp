#include <iostream>
using namespace std;

int main() 
{
	int t=0;
	 cin>>t;
	 while(t--)
	 {
	     int n=0,k=0;
	     cin>>n>>k;
	     int p[n];
	      for(int i=0;i<n;i++)
	      {
	          cin>>p[i];
	      }
	      int ans=-1;
	      for(int i=0;i<n;i++)
	      {
	         if(k%p[i]==0 && k>p[i])
	         ans=max(ans,p[i]);
	        
	      }
	      if(ans!=-1)
	      cout<<ans<<endl;
	      else
	      cout<<"-1"<<endl;
	 }
	return 0;
}

