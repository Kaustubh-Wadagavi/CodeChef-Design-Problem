#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--)
    {
        long long n,sum=0;  cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(long long i=0;i<n-1;i++){
                sum=sum+(abs(a[i]-a[i+1])-1);
            //cout<<sum<<endl;
        }
        cout<<sum<<endl;

    }
    return 0;
}
