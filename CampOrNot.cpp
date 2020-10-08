#include <iostream>
using namespace std;

int main(void) {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int d[n],p[n];
	    for(int i=1;i<=n;i++)
	    {
	        cin>>d[i]>>p[i];
	    }
	    int q;
	    cin>>q;
	    int def[q],pef[q];
	    for(int i=1;i<=q;i++)
	    {
	        cin>>def[i]>>pef[i];
	    }
	    for(int i=1;i<=q;i++)
	    {
	        int r=0;
	        for(int j=1;j<=n;j++)
	        {
	            if(def[i]>=d[j])
	            {
	                r+=p[j];
	            }
	        }
	        if(r>=pef[i])
	        {
	            cout<<"Go Camp"<<endl;
	        }
	        else
	        {
	            cout<<"Go Sleep"<<endl;
	        }
	    }
	    
	}
	return 0;
}
