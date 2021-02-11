#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while( t-- )
	{
	    int l,b;
	    cin >> l >> b;
	    
	    int countL = 0, countB = 0;
	    int i = 1;
	    
	    while( true )
	    {
	        if( countL > l )
	        {
	            cout << "Bob" << endl;
	            break;
	        }
	        else if( countB > b )
	        {
	            cout << "Limak" << endl;
	            break;
	        }
	        
	        if( i % 2 != 0)
	        {
	            countL += i;
	        }
	        else 
	        {
	            countB += i;
	        }
	       
	       i++;
	    }
	}
	return 0;
}
