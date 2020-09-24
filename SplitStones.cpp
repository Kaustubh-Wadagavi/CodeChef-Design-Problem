#include<bits/stdc++.h>
using namespace std; 

string check(long a, long b,long c,long x,long y)
{
    if((x<a && x<b && x<c ) || (y<a && y<b && y<c))
    {
        return "NO";
    }
    if((x-a + y-b == c) || (x-b + y-c == a) ||(x-a + y-c == b) || (x-b + y-a == c) || (x-c + y-b == a) ||(x-c + y-a == b) )
    {
        return "YES";
    }
    return "NO";
}


int main()
{
    int t;cin>>t;
    for (int i = 0; i < t; i++)
    {
        long int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        cout<<check(a,b,c,x,y)<<endl;
    }
    return 0;
}