#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        string str;
        cin>>str;
        int i,flag=0;
        for(i=0;i<N-1;i++)
        {
            if(str[i]==str[N-1])
            {
                flag=1;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
    }
}
