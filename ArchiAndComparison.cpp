#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <math.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t-- >0)
    {
        long long a,b,n;
        cin>>a>>b>>n;
   
        if(n%2==0)
        {
            if(abs(a)>abs(b))
	        cout<<"1\n";
	        else if(abs(a)<abs(b))
	        cout<<"2\n";
	        else
	        cout<<"0\n";
        }
        else
        {
          if(a>b)
	        cout<<"1\n";
	        else if(a<b)
	        cout<<"2\n";
	        else
	        cout<<"0\n";
        }
        
    }
    
	return 0;
}

