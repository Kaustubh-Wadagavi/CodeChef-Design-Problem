#include <iostream>
#include<cmath>
using namespace std;

int main() 
{
	long int t;
	float x1,x2,x3,v1,v2,d1,d2;
	cin>>t;
	
	for(long int i=0;i<t;i++)
	{
	    cin>>x1>>x2>>x3>>v1>>v2;
	    d1=(x3-x1)/v1;
	    d2=(x2-x3)/v2;
	    
	    if(d1==d2)
	    {
	       cout<<"Draw"<<endl;
	    }
	    else if(d1<d2)
	    {
	        cout<<"Chef"<<endl;
	    }
	    else if(d1>d2)
	    {
	        cout<<"Kefa"<<endl;
	    }
	}
	return 0;
}
