#include <iostream>
using namespace std;

bool allnines(string& s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='9')
        {
            return false;
        }
    }
    return true;
}
bool allzero(string& s)
{
    for(int i=0;i<s.size();i++)
        if(s[i]!='0')
           return false;
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(allnines(s))
        {
            cout<<1;
            for(int i=0;i<s.size()-1;i++)
            {
                cout<<0;
            }
            cout<<1<<endl;
            continue;
        }
        if(allzero(s))
        {
            cout<<1;
            for(int i=0;i<s.size()-2;i++)
            {
               cout<<0;
            }
            cout<<1<<endl;
            continue;
        }
       
        int n=s.size();
        int left,right;
        left=right=n/2;
        
        if(n%2==0)
        {
            left--;
        }
        while(left>=0 && s[left]==s[right])
        {
            left--;
            right++;
        }
        if(left < 0 || s[left] < s[right])
        {
            right=left=n/2;
            if(n%2==0)
               left--;
            int carry=1;
            while(left>=0)
            {
                int num=(s[left]-'0')+carry;
                carry=num/10;
                s[left]=(num%10)+'0';
                s[right]=s[left];
                left--;
                right++;
            }
        }
        else
        {
            while(left>=0)
            {
                s[right]=s[left];
                left--;
                right++;
        
            }
        }
        cout<<s<<endl;
    }
}