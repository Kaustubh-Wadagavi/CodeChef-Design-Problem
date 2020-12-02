#include <iostream>
using namespace std;

int main() 
{
	int x;
	cin>>x;
	while(x--)
	{
	    
	    long long int a,b;
	    cin>>a>>b;
	    
	    if(((a/b)%b)!=0)
	    {
	        std::cout << "YES" << std::endl;
	    }
	    else 
	    {
	        std::cout << "NO" << std::endl;
	    }
	}
	return 0;
}
