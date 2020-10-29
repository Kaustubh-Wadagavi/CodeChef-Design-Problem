#include <iostream>
using namespace std;

int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
	    string s,result;
	    cin>>s;
	    int N=s.size();
	    int count=0;
	    for(int i=0;i<N;i++)
	    {
	        if(s[i]>=97 && s[i]<=122)
	            if(s[i]=='c' || s[i]=='h' || s[i]=='e' || s[i]=='f')
	             if((s[i+1]=='c' || s[i+1]=='h' || s[i+1]=='e' || s[i+1]=='f')&& (s[i]!=s[i+1]))
	             if((s[i+2]=='c' || s[i+2]=='h' || s[i+2]=='e' || s[i+2]=='f')&& (s[i+2]!=s[i+1])&& (s[i+2]!=s[i]))
	             if((s[i+3]=='c' || s[i+3]=='h' || s[i+3]=='e' || s[i+3]=='f')&& (s[i+3]!=s[i+1]) && (s[i+3]!=s[i+2]) && (s[i]!=s[i+3]))
	           count++;
	    }
	       
	    if(count>0)
	    cout<<"lovely "<<count<<endl;
	    else
	    cout<<"normal"<<endl;
	}
	return 0;
}