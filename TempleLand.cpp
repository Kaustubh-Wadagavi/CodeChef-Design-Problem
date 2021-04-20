#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,flag;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        if(n%2!=0)
        {
            if(a[0]==1 && a[n-1]==1)
            {
                flag=0;
                for(i=1;i<n-1;i++)
                {
                    if(i<(n-1)/2)
                    {
                        if(a[i+1]-a[i]!=1)
                        flag=1;
                    }
                    else if(i>=(n-1)/2)
                    {
                        if(a[i]-a[i+1]!=1)
                        flag=1;
                    }
                }
                if(flag==1)
                cout<<"no"<<endl;
                else
                cout<<"yes"<<endl;
            }
            else
            cout<<"no"<<endl;
        }
        else
        cout<<"no"<<endl;
        
    }
}