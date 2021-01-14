#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string x,y;
	    cin>>x>>y;
	    for(int i=0;x[i]!='\0';i++)
	    {
	        if((x[i]=='?'||y[i]=='?')||(x[i]==y[i]))
	        {
	            continue;
	        }
            else
            {
                cout<<"No"<<endl;
                goto that;
            }
	    }
	    cout<<"Yes"<<endl;
	    that:;
	}
	return 0;
}

