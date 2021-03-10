#include<bits/stdc++.h>
using namespace std;

long long int find_subarray(long long int *a,int &j,int n,long long int count)
{
    for( ;j<n-1 && (a[j]<=a[j+1]);j++)
    {
        count++;
    }
    count = count * (count+1) / 2;
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        long long int total=0;
        for(int j=0;j<n;j++)
        {
            long long int count=1;
            count = find_subarray(a,j,n,count);
            total+=count;
        }
        cout<<total<<endl;
    }
    return 0;
}
