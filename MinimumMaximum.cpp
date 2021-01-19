#include <iostream>
using namespace std;

int main() 
{

	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,smallest;
	    cin>>n;
	    long long int a[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    smallest=a[0];
	    for(int i=0;i<n;i++)
	    {
	        if(smallest >a[i]) 
	        {
                smallest = a[i];
	        }
	    }
	    cout<<smallest*(n-1)<<endl;
	}
	return 0;
}
