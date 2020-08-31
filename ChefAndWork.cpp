#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    { 
        ll i,m,r1,c1,r2,c2,n,q,k,j,u,l=0,r=0,p,x,y,v,s1=0,s2=1,
        s3=1000000007,s4=0,s5=0;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>k)
            {
                s4=-1;
                break;
            }
            else
            {
                s1=s1+a[i];
                if(s1>k)
                {
                    s4++;
                    s1=0;
                    i--;
                }
                else if (i==n-1)
                    s4++;
                }
            }
        cout<<s4<<"\n";
    }
    return 0;
}