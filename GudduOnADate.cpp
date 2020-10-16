#include <iostream>
using namespace std;

int main() 
{
	
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n ;
	     cin>>n;
	     
	     long long int temp = n;
	     int sum = 0;
	     while(temp!=0)
	     {
	         sum+=temp%10;
	         temp/=10;
	     }
	     if(sum%10==0)
	     {
	         cout<<n<<0<<endl;
	     }
	     else
	     {
	        cout<<n<<(10-sum%10)<<endl;
	     }
	}
	return 0;
}
