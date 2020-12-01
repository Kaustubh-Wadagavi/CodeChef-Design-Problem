#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	int T;
	cin>>T;
	
	while(T--)
	{
	    ll n = 0;
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    for(int i=a;i<=b;i++)
        {
            if(i<c)
            {
                n=n+1+d-c;
            }
            else if(i<d)
            {
                n=n+d-i;
            }
            else
            {
                break;
            }
        }
        
        cout<<n<<endl;
	}
	
	return 0;
}
