#include <iostream>
using namespace std;
int max(int x,int y,int z)
{
    if(x>y)
    {
        if(x>z)
        return x;
        else
        return z;
    }
    else
    {
        if(y>z)
        return y;
        else
        return z;
    }
}

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count1=0,r=0,g=0,b=0;
	    cin>>n;
	    string str;
	    cin>>str;
	    for(int i=0;i<n;i++)
	    {
	        if(str[i]=='R')
	        r++;
	        else if(str[i]=='G')
	        g++;
	        else
	        b++;
	    }
	    cout<<r+g+b-max(r,g,b)<<endl;
	}
	return 0;
}
