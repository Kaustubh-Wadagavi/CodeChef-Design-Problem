
#include <iostream>
using namespace std;

int main() 
{

	int t;
	cin>>t;
	while(t)
	{
	    int n,h,y1,y2,l,b=0,i;
	    cin>>n>>h>>y1>>y2>>l;
	    int x[n],type[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>type[i]>>x[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        if(type[i]==1)
	        {
	            if((h-y1)<=x[i])
	            {
	                b++;
	            }
	            else
	            {
	                if(l>1)
	                {
	                    l--;
	                    b++;
	                }
	                else
	                break;
	            }
	        }
	        else
	        {
	            if(y2>=x[i])
	            {
	                b++;
	            }
	            else 
	            {
	                if(l>1)
	                {
	                    l--;
	                    b++;
	                }
	                else
	                break;
	            }
	        }
	    }
	    cout<<b<<endl;
	    t--;
	}
	return 0;
}
