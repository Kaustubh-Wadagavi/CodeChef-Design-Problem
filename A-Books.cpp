#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        int x,m;
        cin>>x;
        int a[x];
    
        for(int i=0;i<x;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<x;i++)
        {
            m=0;
            for(int j=i+1;j<x;j++)
            {
                if(a[i]<a[j])
                {
                    m++;
                }
            }
            cout<<m<<" ";
        }
    cout<<endl;
    }
    return 0;
}
