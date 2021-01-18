#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
       int a=0,b=0,mini=10001;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        if(a>b)
            cout<<b<<endl;
        else
            cout<<a<<endl;
    }
}