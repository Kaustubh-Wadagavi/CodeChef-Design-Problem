#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
         long long int n;
         string s;
         cin>>s;
         n=s.length();
         long long int ans=1e18;
         for(int i=0;i<n;i++)
         {
              string str;
             for(int j=0;j<n;j++)
             {
                  if(i!=j)
                  {
                    str=str+s[j];   
                  }
                  
             }
             	ans=min(ans,stoll(str));
            
         }
        cout<<ans<<endl;
    }
    
	return 0;
}