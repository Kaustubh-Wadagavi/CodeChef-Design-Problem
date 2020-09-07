#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,k,s;
	    cin>>n>>k>>s;
	    if(n>0)
	    {
	        
	    int req=k*s;                                
	    int b=s/7;                             
	    int bou_max=n*(s-b);                        
	    if(req<=bou_max)                            
	    {
	        int a;
	        a=req%n;                                
	        if(a==0)                               
	        {
	            cout<<req/n<<"\n";                  
	        }
	        else
	        {
	            cout<<((req/n)+1)<<"\n";
	        }
	    }
	    else{cout<<"-1"<<"\n";}
	}
	}
	return 0;
}
