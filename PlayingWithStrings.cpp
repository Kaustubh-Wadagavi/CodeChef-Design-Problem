#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
   int n;
   cin>>n;
  int s[2] = {0}, r[2] = {0};
  for(int i = 0 ;i < n ; i++ )
  {
        char x;
        cin>>x;
        s[x - '0']++;
  }
  for(int i = 0 ;i < n ; i++ )
  {
    char x;
    cin>>x;
    r[x - '0']++;
  }
  if(s[0] == r[0] && s[1] == r[1])
  {
      cout<<"YES"<<endl;
  }
  else
  {
     cout<<"NO"<<endl;
  }
 }
}