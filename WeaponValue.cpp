#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--) 
	{
	    int n; 
	    cin>>n;
	    string temp;
	    cin>>temp;
	    string ans = temp;
	    while(n>1)
	    {
	        
	        cin>>temp;
	        for(int i=0; i<10; i++)
	        {
	            if(ans[i]=='0' && temp[i] =='0')
	            {
	                ans[i]='0';
	            }
	            else if(ans[i]=='1' && temp[i] =='1')
	            {
	                ans[i] = '0';
	            }
	            else if((ans[i]=='1' && temp[i]=='0') || (ans[i]=='0' && temp[i]=='1'))
	            {
	                ans[i]='1';
	            }
	        }
	        n--;
	    }
	    int c=0;
	    for(int i=0; i<10; i++)
	    {
	        if(ans[i] =='1')
	        {
	            c++;
	        }
	    }
	    cout<<c<<endl;
	    
	}
	return 0;
}
