#include <iostream>

using namespace std;

int main() 
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,q;
	    cin>>n>>q;
	    long count=0;
	    int pos=0;
	    for(int i=0;i<q;i++)
	    {
	     int e,f;
	     cin>>e>>f;
	     count=count+abs(pos-e)+abs(e-f);
	     pos=f;
	    }
	    std::cout << count << std::endl;
	    
	}
	return 0;
}
