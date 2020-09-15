#include <iostream>
using namespace std;

int main() 
{
    int t,s,i,maxi=0;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int a[s],b[s],x[s];
        for(i=0;i<s;i++)
            {
                cin>>a[i];
                x[i]=0;
            }
        for(i=0;i<s;i++)
            cin>>b[i];
        maxi=-1;
        for(i=1;i<s-1;i++)
        {
            if((b[i]>a[i-1]+a[i+1]))
            x[i]=1;
        }
        if(b[0]>a[s-1]+a[1])
        x[0]=1;
        if(b[s-1]>a[s-2]+a[0])
        x[s-1]=1;
        for(i=0;i<s;i++)
        {
            if(x[i]==1)
            {
                if(maxi<b[i])
                maxi=b[i];
            }
        }
        cout<<maxi<<"\n";
        
    }
	return 0;
}