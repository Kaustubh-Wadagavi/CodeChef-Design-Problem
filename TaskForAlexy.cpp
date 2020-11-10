#include<bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int c, int b)
{
    return (c/gcd(c, b)) * b;
}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {long long int n,i,j;
        cin>>n;
       long long int a[n],d=9223372036854775807;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(lcm(a[i],a[j])<d)
                d=lcm(a[i],a[j]);
            }

        }
     cout<<d<<endl;
    }
    return 0;
}
