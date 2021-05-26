#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n%2!=0 && k%2!=0 && (k==n+2 ||n==k+2))
        {
           cout<<"YES"<<endl;
        }
        else if(n%2==0 && k%2==0 && (k==n+2 ||n==k+2))
        {
           cout<<"YES"<<endl;
        }
        else if(n%2!=0 && k%2==0 && k==n+1)
        {
            cout<<"YES"<<endl;
        }
        else if(n%2==0 && k%2!=0 && n==k+1)
        {
           cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

