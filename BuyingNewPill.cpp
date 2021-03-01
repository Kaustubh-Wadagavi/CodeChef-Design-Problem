#include<iostream>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n,b;
        cin>>n>>b;
        int area[n];
        int price[n];
        for(int i= 0 ; i<n ; i++)
        {
            int l,b;
            cin>>l>>b>>price[i];
            area[i] = l*b;
        }
        int max = 0 ;
        int a = 0;
        for(int i = 0 ; i<n ; i++)
        {
            if(area[i]>max && price[i]<=b)
            {
                max = area[i];
                a = area[i];
            }
        }
        if(a==0)
        {
            cout<<"no tablet"<<endl;
        }
        else
        {
            cout<<a<<endl;
        }
    }
    return 0;
}