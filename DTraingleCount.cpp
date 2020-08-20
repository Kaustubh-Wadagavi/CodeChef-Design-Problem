#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,i,c=0,r=0,t,u;
    cin>>t;
    for(u=1;u<=t;u++)
    {
      cin>>a>>b;
      for(i=0;i<=a-b;i++)
      {
        c++;
        r+=c;
      }
      cout<<"Case "<<u<<": "<<r<<endl;
      r=0,c=0;
    }
return 0;
}