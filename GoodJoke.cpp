#include <iostream>
using namespace std;

int main() 
{
	int a;
	std::cin >> a;
	int s;
	for(int i=0;i<a;i++)
	{
	    std::cin >> s;
	    int x,y,d=0;
	    for(int j=0;j<s;j++)
	    {
	        std::cin >> x >> y;
	    }
	    for(int j=1;j<=s;j++)
	    {
	        d=d^j;
	    }
	    std::cout << d << std::endl;
	}
	return 0;
}
