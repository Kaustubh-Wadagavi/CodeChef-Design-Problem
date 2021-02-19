#include<iostream>
#include<cmath>

using namespace std;

int main()
{ 
    int x,i,j,k,t,l,p=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>k;
        l=k;
        for(j=0;j>=0;j++)
       {
           x=sqrt(l);
           if(l-(x*x)==0)
           {
               p++;
               break;
               
           }
           p++;
           l=l-(x*x);
       }
     cout<<p<<endl;
     p=0;
   } 
  return 0;
}