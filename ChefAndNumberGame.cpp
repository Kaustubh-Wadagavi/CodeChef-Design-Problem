#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    int a[100000],i,n,cnt,t;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                cnt++;
            }
        }
        if(cnt==0)
        {
            cout<<n<<" "<<n<<endl;
        }
        else
        {
            cout<<n-cnt<<" "<<cnt<<endl;
        }
    }
    return 0;
}