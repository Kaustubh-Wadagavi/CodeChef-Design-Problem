#include <iostream>

using namespace std;

int main()
{
    int T;
    int i,x;
    string s;
    int c[26];
    cin>>T;
    while(T--)
    {
        for(i=0;i<26;i++)
            c[i]=0;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            x=s[i];
            c[x-97]++;
        }
        for(i=0;i<26;i++)
        {
            for(int j=0;j<25-i;j++)
            {
                if(c[j]>c[j+1])
                    swap(c[j],c[j+1]);
                }
            }
        int z;


        for(i=22;i>0;i--)
        {
            if(c[i]!=0)
                z=i;
        }
        int flag=1;
        if(c[z+3]!=c[z+2]+c[z+1])
            swap(c[z],c[z+1]);
        for(i=25;i>1;i--)
        {
            if(c[i-2]==0)
            {
                break;
            }
            if(c[i] != c[i-1] + c[i-2])
            {
                flag=0;
            }
        }
        if(flag==1)
            cout<<"Dynamic"<<endl;
        else
            cout<<"Not"<<endl;
    }
    return 0;
}

