#include <iostream>
using namespace std;

int main() 
{
	
	int t;
	cin >> t;
	while(t--)
	{
	    int a, b, sum = 0;
	    cin >> a >> b;
	    int c = 1;
	    while(a != 0 || b != 0)
	    {
	        int a1 = a % 10;
	        int b1 = b % 10;
	        sum += ((a1 + b1) % 10) * c;
	        a /= 10;
	        b /= 10;
	        c *= 10;
	    }
	    cout << sum << "\n";
	}
	return 0;
}
