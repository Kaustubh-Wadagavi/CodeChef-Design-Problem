#include<iostream>
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		long int input,ans = 0;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>input;
			ans = ans + (input%k);
			ans = ans%k;
		}	
		cout<<ans<<endl;
	}
    return(0);
}