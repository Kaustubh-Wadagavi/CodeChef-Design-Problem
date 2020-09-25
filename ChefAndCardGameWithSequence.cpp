#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int n,a,ev=0,odd=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
                cin>>a;
                if(a%2==0)
                    ev++;
                else
                    odd++;
        }
       if(n==1)
        cout<<1<<"\n";
        else if(odd%2==0)
            cout<<1<<"\n";
        else if(odd%2!=0)
            cout<<2<<"\n";

    }
}
