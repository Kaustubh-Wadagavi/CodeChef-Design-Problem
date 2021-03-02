#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char c;
    cin>>a>>b>>c;

    switch(c)
    {
      case '+':cout<<a+b;
               break;
      case '-':cout<<a-b;
               break;
      case '*':cout<<a*b;
               break;
      case '/':double ans=a*(1.0)/b;
	           printf("%0.6f",ans);
               break;
    }
}
