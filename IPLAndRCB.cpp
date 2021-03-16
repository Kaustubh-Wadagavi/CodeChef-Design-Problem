#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,w;
	    cin>>x>>y;
	    if(x<=y)
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	        cout<<x-y<<endl;
	    }
	}
	return 0;
}
