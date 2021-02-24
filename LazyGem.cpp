#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int t;
  cin>>t;
  for(int i = 0; i < t; i++)
  {
    long long int n, b, m;
    cin>>n>>b>>m;
    long long int total = 0;
    while(n > 1)
    {
      if(n%2 == 1)
      {
        total+=(n+1)/2*m+b;
        n-=(n+1)/2;
      }
      else
      {
        total+=n/2*m+b;
        n/=2;
      }
      m*=2;
    }
    total+=n*m;
    cout<<total<<endl;
  }




}
