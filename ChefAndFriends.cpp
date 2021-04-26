#include<iostream>
#include<cmath>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t; 
    int cnt=0;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.length();
       
        for(int i=0;i<n;i++)
        {
            if(s[i]=='c')
            {
                if(s[i+1]=='h')
                {
                    cnt++;
                    break;
                }
            }
            else if(s[i]=='h')
            {
                if(s[i+1]=='e')
                {
                    cnt++;
                    break;
                }
            }
            else if(s[i]=='e')
            {
                if(s[i+1]=='f')
                {
                    cnt++;
                    break;
                }
            }

        }
    } 
    cout<<cnt<<endl;
    return 0;
}