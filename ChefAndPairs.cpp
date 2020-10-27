#include<iostream>

using namespace std;

int main()
{
	int t,n,a[100000],i,j;
	
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int even=0,odd=0;
		for(i=0;i<n;i++)
		{
	
			if(a[i]%2==0)
				even++;
			else
				odd+=even;
			
		}
		cout<<odd<<endl;
	}
}