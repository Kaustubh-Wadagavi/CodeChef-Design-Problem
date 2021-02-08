#include <iostream>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int n = x+y;
        int c = 0;
        while(n > 0)
        {
            if(n%10 == 0 || n%10 == 6 || n%10 == 9)
            {
                c+=6;
            }
            else if(n%10 == 1)
            {
                c+=2;
            }
            else if(n%10 == 2 || n%10 == 3 || n%10 == 5)
            {
                c+=5;
            }
            else if(n%10 == 4)
            {
                c+=4;
            }
            else if(n%10 == 7)
            {
                c+=3;
            }
            else if(n%10 == 8)
            {
                c+=7;
            }
            n/=10;
        }
        cout<<c<<'\n';
    }
    return 0;
}
