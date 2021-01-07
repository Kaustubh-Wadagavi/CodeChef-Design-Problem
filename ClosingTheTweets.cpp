#include<iostream>
using namespace std;

int main()
{
    int n,k,i,tn,count=0;
    cin>>n>>k;
    int a[n+1]={0};
    while(k--)
    {
        string s;
        cin>>s;
        if(s=="CLOSEALL")
        {
            for(i=1;i<=n;i++)
            {
                a[i]=0;
            }
            count=0;
        }
        else
        {
            cin>>tn;
            if(a[tn]==0)
            {
                a[tn]=1;
                count++;
            }
            else 
            {
                a[tn]=0;
                count--;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}