#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t>0) 
    {
        int n;
        cin>>n;
        char a[n];
        int i,c=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]=='Y')
            {
                c=1;
                cout<<"NOT INDIAN"<<endl;
                break;
            }
            else if(a[i]=='I')
            {
                c=1;
                cout<<"INDIAN"<<endl;
                break;
            }
        }   
        if(c==0)
        cout<<"NOT SURE"<<endl;
        t--;
    }
	return 0;
}
