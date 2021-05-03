#include <iostream>
using namespace std;

class chocolate
{
    long m,n;
    public:
    chocolate()
    {
        cin>>m>>n;
        find_winner();
    }
    void find_winner()
    {
        if((m*n)%2==0) cout<<"Yes\n";
        else cout<<"No\n";
    }
};
int main() 
{
    int t;
    cin>>t;
    while(t--) 
    {
        chocolate choco;
    }
	return 0;
}
