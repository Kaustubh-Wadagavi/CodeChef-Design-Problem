#include <iostream>
using namespace std;

int main() 
{
	int T,N,i,max,p;
	cin >> T;
	while(T--)
	{
	    max = 0;
	    cin >> N;
	    int A[N];
	    int B[N];
	    
	    for(i=0;i<N;i++)
	    {
	        cin >> A[i];
	    }
	    
	    for(i=0;i<N;i++)
	    {
	        cin >> B[i];
	    }
	    
	    for(i=0;i<N;i++)
	    {
	        p = A[i]*20 - B[i]*10;
	        if(p>0 && p>max)
	        {
	            max = p;
	        }
	    }
	    cout << max << endl;
	}
	return 0;
}
