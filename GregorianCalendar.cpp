#include <bits/stdc++.h>
#define ll long long
using namespace std;

float sq=1.4142135624;
int main() 
{
	ll  tc,n,m,x,y,i,j,k,d;
    string s;
    cin>>tc;
    while(tc--)
    {
        ll n,k,ans=0;
        cin>>n;
        ll cnt_leap=0,cnt_norm=0;
        for(i=1900; i<n; i++)
        {
            if(i%400==0)
            {
                cnt_leap++;
            }
            else if(i%4==0&&i%100)
            {
                cnt_leap++;
            }
            else
            {
                cnt_norm++;
            }
        }
        
        ll day=(cnt_norm+cnt_leap)*365+cnt_leap;
        day%=7;
        if(day==0)
        {
            cout<<"mon";
        }
        else if(day==1)
        {
            cout<<"tues";
        }
        else if(day==2)
        {
            cout<<"wednes";
        }
        else if(day==3)
        {
            cout<<"thurs";
        }
        else if(day==4)
        {
            cout<<"fri";
        }
        else if(day==5)
        {
            cout<<"satur";
        }
        else if(day==6)
        {
            cout<<"sun";
        }
        cout<<"day\n";
    }
	return 0;
}
