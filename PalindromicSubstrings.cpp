#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string st1,st2;
        int temp=0;
        cin>>st1>>st2;
        for(int i=0;i<st1.size();i++)
        {
            for(int j=0;j<st2.size();j++)
            {
                if(st1[i]==st2[j]){
                    temp=1;
                    break;
                }
                if(temp==1)
                {
                  break;
                }
            }
        }
        if(temp==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}