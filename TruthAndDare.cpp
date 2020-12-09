#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int t1,d1,c1=0,c2=0;
        cin>>t1;
        int tr[t1];
        for(int i=0;i<t1;i++)
        {
            cin>>tr[i];
        }
        cin>>d1;
        int dr[d1];
        for(int i=0;i<d1;i++)
        {
            cin>>dr[i];
        }
        int t2;
        cin>>t2;
        int ts[t2];
        for(int i=0;i<t2;i++)
        {
            cin>>ts[i];
        }
        int d2;
        cin>>d2;
        int ds[d2];
        for(int i=0;i<d2;i++)
        {
            cin>>ds[i];
        }
        for(int i=0;i<t2;i++)
        {
            for(int j=0;j<t1;j++)
            {
                if(ts[i]==tr[j])
                {
                    c1++;
                    break;
                }
            }
        }
        if(c1==t2)
        {
           for(int i=0;i<d2;i++)
        {
            for(int j=0;j<d1;j++)
            {
                if(ds[i]==dr[j])
                {
                    c2++;
                    break;
                }
            }
        }
        }
        if((c2+c1)==(d2+t2))
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}