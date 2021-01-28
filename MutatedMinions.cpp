#include <iostream>
using namespace std;

int main() 
{
   int t,i;
   cin>>t;
   for(i=0;i<t;i++)
   {
       int n,k,j,cnt=0;
       cin>>n>>k;
       int a[n];
       for(j=0;j<n;j++)
       {
           cin>>a[j];
           a[j]=a[j]+k;
       }
       for(j=0;j<n;j++)
       {
           if(a[j]%7==0)
           {
               cnt++;
           }
       }cout<<cnt<<endl;
   }
  
	return 0;
}
