#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int subject,judge;
        cin>>n;
        int count=0;
        while(n--)
        {
            cin>>subject>>judge;
            if(judge-subject > 5)
            {   
                count++; 
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
