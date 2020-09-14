#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   int t;
   cin>>t;
   while(t--)
   {
       long long int n,m,cnt=0;
       cin>>n>>m;
       long long int a[n],i;
        for(i=0;i<n;++i)
           {
              cin>>a[i];
              if(a[i]%m==0)
                 cnt++;
           }
        long long int ans=0;
        ans=pow(2,cnt)-1;
        cout<<max(ans,0LL)<<endl;
   }
    return 0;
}