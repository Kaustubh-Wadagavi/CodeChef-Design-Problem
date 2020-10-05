#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int x[t];
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int s[n];
		s[0]=0,s[1]=0;
		for(int j=1;j<n-1;j++)
		{
			int flag=0,temp;
			for(int k=j-1;k>=0;k--)
			{
				if(s[k]==s[j])
				{
				flag=1;
				temp=k;
				break;
			    }
			}
			if(flag==1)
			{
				s[j+1]=j-temp;
			}
			else
			s[j+1]=0;
		}
		int x1=s[n-1],count=0;
		for(int j=0;j<n;j++)
		{
			if(s[j]==x1)
			count++;
		}
		x[i]=count;
	}
	for(int i=0;i<t;i++)
	cout<<x[i]<<endl;
}