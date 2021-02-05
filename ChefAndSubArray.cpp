#include<bits/stdc++.h>
using namespace std;
int main()
{
   int T;
   cin>>T;
   while(T--)
   {
       int n,count = 0;
       cin>>n;
       int arr[n];
       int i,j;
       for(i = 0;i<n;i++)
       {
           cin>>arr[i];
       }
       for(i = 0;i<n;i++)
       {  
           long long int sum = 0,product = 1;
           for( j = i;j>=0;j--)
           {
               sum = sum + arr[j];
               product = product*arr[j];
               if(sum == product)   count++;
             
           }
       }
       cout<<count<<endl;
   }
}