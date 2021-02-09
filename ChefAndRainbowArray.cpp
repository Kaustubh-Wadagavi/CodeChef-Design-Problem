#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int i,j;
        int flag=1;
        if(!(arr[0]==1 && arr[n-1]==1))
        {
            puts("no");
            continue;
        }
        for(i=0,j=n-1;i<j;i++,j--)
        {
            if(arr[i]!=arr[j] || (arr[i+1]-arr[i])>1)
            {
                flag=0;
                break;
            }
        }
        if(arr[i]!=7)
        {
           flag=0;
        }
        if(flag==1)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
}
