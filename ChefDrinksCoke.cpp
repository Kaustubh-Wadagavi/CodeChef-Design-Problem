#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n,m,k,l,r;
    cin>>n>>m>>k>>l>>r;

    int c[n][2];
    int s = INT_MAX;
    int i,j;

    for(i=0;i<n;i++)
    {
      cin>>c[i][0]>>c[i][1];
      for(j=0;j<m;j++)
      {
        if(c[i][0]>k+1)
        {
          c[i][0]--;
        }
        else if(c[i][0]<k-1)
        { 
          c[i][0]++;
        }
        else 
        {
          c[i][0]=k;
        }
      }

      if( c[i][0] >=l and c[i][0] <= r and c[i][1] < s) 
      {
        s = c[i][1];
      }
    }

    if(s==INT_MAX)
    {
      cout<<-1<<endl;
    }
    else
    {
      cout<<s<<endl;
    }
  }
  return 0;
}
