#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int A,B;
    cin>>A>>B;
    int a[A],i;
    for(i=0;i<A;i++)
    {
        cin>>a[i];
    }
    
    for(i=0;i<A;i++)
    {
        if(a[i]>=B)
        {
            std::cout << "Good boi" << std::endl;
        }
        else
        {
            std::cout << "Bad boi" << std::endl;
        }
    }
	return 0;
}
