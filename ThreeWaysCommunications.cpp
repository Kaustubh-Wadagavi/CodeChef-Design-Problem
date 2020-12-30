#include <iostream>
#include<cmath>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int i,a[3],b[3],r,p,c,d,e;
	    cin>>r;
	    p=r*r;
	    for(i=0;i<3;i++)
	    {
	        cin>>a[i]>>b[i];
	    }
	    
	    c=(pow((a[1]-a[0]),2))+(pow((b[1]-b[0]),2));
	    d=(pow((a[2]-a[1]),2))+(pow((b[2]-b[1]),2));
	    e=(pow((a[2]-a[0]),2))+(pow((b[2]-b[0]),2));
	    
	    if(c<=p&&d<=p&&e<=p)
	    {
	       cout<<"yes"<<endl;
	    }
	    else if(c<=p&&d<=p)
	    {
	       cout<<"yes"<<endl;
	    }
	    else if(d<=p&&e<=p)
	    {
	       cout<<"yes"<<endl;
	    }
	    else if(e<=p&&c<=p)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
