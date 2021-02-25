#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while (t--) 
	{
	    int c,d,l;
	    cin >> c >> d >> l;
	    bool res = true;
	    if (l%4)
	    {
	        res = false;
	    }
	    else 
	    {
	        l /= 4;
	        if (l > c + d || l < d + max(c-d-d,0))
	            res = false;
	    }
	    cout << (res? "yes": "no") << '\n';
	}
}
