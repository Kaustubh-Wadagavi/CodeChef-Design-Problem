#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    int count=0;
	    cin>>s;
	    int len = s.length();
	    for(int i=0;i<len;i++)
	    {
	        if(s[i]=='<' && s[i+1]=='>')
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
