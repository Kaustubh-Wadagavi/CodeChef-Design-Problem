#include <bits/stdc++.h>
using namespace std;

int Bracket(string s)
{
    int balance=0,maxbalance=0;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            balance++;
        }
        else
        {
            balance--;
        }
        maxbalance=max(balance,maxbalance);
    }
    return maxbalance;
}

int main() 
{
  int t;
  cin>>t;
  
  while(t--)
  {
   string s;
   cin>>s;
   int bal=Bracket(s);
   
   for(int i=0;i<bal;i++)
   {
       cout<<"(";
   }
   
   for(int i=bal;i<bal*2;i++)
   {
       cout<<")";
   }
   
   cout<<"\n";
  }
	return 0;
}

