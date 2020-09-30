#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int t,i,proxy,temp;
    string str;
    double percentage,n,countP;
    cin>>t;
    while(t--)
    {
        cin>>n>>str;
        proxy=0;temp=0;
        countP=count(str.begin(), str.end(), 'P');  
        percentage=((countP)/(n))*100;
        if(percentage>=75)                         
            cout<<proxy<<endl;
        else
        {
            for(i=2;i<n-2;i++)
            {
                if((str[i-1]=='P'||str[i-2]=='P')&&(str[i+2]=='P'||str[i+1]=='P')&&str[i]=='A') 
                {
                    countP++;
                    proxy++;                                 
                    percentage=((countP)/(n))*100;      
                    if(percentage>=75)
                    {
                        temp=1;
                        cout<<proxy<<endl;
                        break;
                    }
                }
            }
            if(temp==0)
            {
                cout<<-1<<endl;
            }
        }
 
 
    }
    return 0;
}
