#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string n;
	    cin>>n;
	    long count0 = 0, count1 = 0;
	    for(int i=0; i< n.length(); i++)
	    {
	        if(n[i] == '1')
	        {
	            count1++;
	        }
	        else
	        {
	            count0++;
	        }
	    }
	    
	    if(count1 == 1 || count0 == 1)
	    {
	        cout<<"Yes\n";
	    }
	    else
	    {
	        cout<<"No\n";
	    }
	}
	return 0;
}
