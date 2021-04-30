#include<bits/stdc++.h>
using namespace std;

int main()
{
   int test,n,count=0,a,b,N,K,R,C;
   cin>>test;
 
   while(test--)
   {
       cin>>R>>C;
       a=(R-1)+(C-1)+2*(R-1)*(C-1);
       cout<<a<<endl;
   }
}