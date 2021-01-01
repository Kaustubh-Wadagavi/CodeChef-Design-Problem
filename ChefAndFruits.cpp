#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;  
    
    while(t--)
    {
        int flag=0;
        int n,m,k;
        cin>>n>>m>>k; 
    
        while(k--)
        {
            if(n>m)
            {
                m++;
            }
            else if(n<m)
            {
                n++;
            }
            else if(n==m && k%2==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<0;
        }
        else
        {
            cout<<(abs(m-n));
        }
        cout<<endl;
    }
}