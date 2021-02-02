#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	   int n,k,a;
	   cin>>n>>k;
	   while(n--)
	   {
	   	    cin>>a;
	   	    if(a<=k)
	   	    {
	   	        cout<<"1";
	   	        k-=a;
	   	    }
	   	    else
	   	    {
	   	        cout<<"0";
	   	    }
	   }
	    cout<<endl;
	}
	return 0;
}
