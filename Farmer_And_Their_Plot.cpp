#include <iostream>
using namespace std;

int main() 
{
	int t;  cin>>t;
	while(t--)
	{
	    int a,b,c,d;    cin>>a>>b;
	    c=a;
	    d=b;
	    while(a!=b)
	    {
	        if(a>b)
	        {
	            a=a-b;
	        }
	        else
	        {
	            b=b-a;
	        }
	    }
	    c=c/b;
	    d=d/b;
	    cout<<(c*d)<<endl;
	}
	return 0;
}
