#include <iostream>
using namespace std;

int main() 
{
	
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,k=1;
	    cin>>n;
	    for(int i=0 ; i<n ; i++)
	    {
	        cout<<k<<" ";
	        k+=4;
	    }
	    cout<<endl;
	}
	return 0;
}
