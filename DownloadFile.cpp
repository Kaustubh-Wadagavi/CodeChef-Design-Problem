#include <iostream>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        int t[n],d[n];
        cin>>k;
        for(int i=0;i<n;i++)
        {
            cin>>t[i];
            cin>>d[i];

        }
        for(int j=0;j<n;j++)
        {
            if(k==0)
            {
               break;
            }
            if(t[j]>=k)
            {

               t[j]=t[j]-k;
               k=0;
            }
            else
            {
               k=k-t[j];
               t[j]=0;
            }
        }
        int sum=0;
        for(int k=0;k<n;k++)
        {
            sum=sum+t[k]*d[k];
        }
        cout<<sum<<endl;
    }

    return 0;
}
