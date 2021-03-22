#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n = s.length(),  cnt1 = 0, cnt2 = 0;
	    for(int i=0;i<n;++i)
	    {
	        if(s[i] == '0')
	        {
	            cnt2++;
	        }
	        else
	        {
	            cnt1++;
	        }
	    }
	    if(cnt1 == 10 && cnt2 == 10)
	    {
	        cnt1+=2;
	    }
	    if(cnt1>cnt2)
	    {
	        cout<<"WIN\n";
	    }
	    else
	    {
	        cout<<"LOSE\n";
	    }
	}
	return 0;
}
