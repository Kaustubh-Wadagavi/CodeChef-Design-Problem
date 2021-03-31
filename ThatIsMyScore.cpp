#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int a[n],b[n],c[8];
       for(int i=0;i<n;i++)
       {
           cin>>a[i]>>b[i];
       }
       for(int i=0;i<8;i++)
       {
           c[i]=-1;
       }
       for(int i=0;i<n;i++)
       {
           if(a[i]<=8)
           {
               if(c[a[i]-1]<=b[i])
               {
                   c[a[i]-1]=b[i];
               }
           }
       }
       int sum=0;
       for(int i=0;i<8;i++)
       {
           if(c[i]!=-1)
           {
               sum+=c[i];
           }
       }
       cout<<sum<<endl;
    }
    return 0;
}
	
