#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n==1)
    {
        return false;
    }
    if(n==2 || n==3 || n==5 || n==7)
    {
        return true;
    }
    if(n%2 == 0) 
    {
        return false;
    }
    for(int i=3; i<=sqrt(n); i+=2)
    {
        if(n%i == 0) 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int a, b;
	    cin >> a >> b;
	    int val = a+b+1, count = 1;
	    while(true)
	    {
	        if(isPrime(val))
	        {
	            cout << count << endl;
	            break;
	        }
	        count++;
	        val++;
	    }
	}
	return 0;
}
