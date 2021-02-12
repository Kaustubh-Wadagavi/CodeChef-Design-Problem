#include <iostream>
using namespace std;
int main() 
{
    
    int t; cin>>t;
    while(t--)
    {
        int m,k,n;
        cin>>m>>k>>n;
        int track[k],ignore[n];
        for(int i=0;i<k;i++)cin>>track[i];
        for(int i=0;i<n;i++)cin>>ignore[i];

        int hash[m+1]={0};
        for(int i=0;i<k;i++)
        {
            hash[track[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            hash[ignore[i]]++;
        }
        int both=0,none=0;
        for(int i=1;i<=m;i++)
        {
            if(hash[i] == 2)both++;
        }
        for(int i=1;i<=m;i++)
        {
            if(hash[i] == 0)none++;
        }
        cout<<both<<" "<<none<<endl;

    }

}
