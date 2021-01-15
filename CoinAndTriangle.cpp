#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{   int count=0;
	   long long int n;
	    cin>>n;
	    for(int i=1; i<=n; i++)
	    {
	        count++;
	        n=n-i;
	    }
	    cout<<count<<endl;
	}
	return 0;
}

