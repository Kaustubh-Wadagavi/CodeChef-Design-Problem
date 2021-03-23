#include <iostream>
using namespace std;

int main() 
{
	long long int t,n,i,j,c;
	cin>>t;
	while(t--)
	{   c=0;
	    cin>>n;
	    char s[n];
	    cin>>s;
	    for(i=0;i<n-1;i++)
	    {
	      if((s[i]!='a'&& s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')&&(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u'))
	        {
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
