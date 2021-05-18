#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int t,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int sum=0,flag=0,sum2=0,flag2=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i] == 'S')
            {
                sum=1;
            }
            if(s[i]!='S' && sum==1)
            {
                flag=1;
                cout<<"no"<<endl;
                break;
            }
            if(s[i] == 'E')
            {
                sum2 = 1;
            }
            if(s[i] == 'C' && sum2 == 1)
            {
                flag2 = 1;
                cout<<"no"<<endl;
                break;
            }
        }
        if(flag == 0 && flag2 == 0)
        {
            cout<<"yes"<<endl;
        }
    }
	
	return 0;
}
