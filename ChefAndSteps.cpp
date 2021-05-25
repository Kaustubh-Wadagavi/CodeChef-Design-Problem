#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int a1[n] = {0};
	    for(int i =0;i<n;i++)
	    {
	        if(a[i]% k == 0)
	        {
	            a1[i] = 1;
	        }
	    }
	    for(int i =0;i<n;i++)
	    {
	        cout<<a1[i];
	    }
	    cout<<endl;
	}
	return 0;
}
