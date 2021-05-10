#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,p;
        cin >> n >>p;
        long long  c=0,h=0;
        for(long long  i=0;i<n;i++)
        {
            long long  k;
            cin >> k;
            if(k >=p/2)c+=1;
            else if(k<=p/10)h+=1;
        }
        if(c == 1&& h ==2)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
}