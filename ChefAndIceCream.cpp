#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int five=0;
		int ten=0;
		int fif=0;
		int flag=0;
		if(a[0]==5)
		{
			five++;
			for(int i=1;i<n;i++)
			{
				if(a[i]==5)
				{
					five++;
				}
				else if(a[i]==10)
				{
					if(five>0)
					{
						ten++;
						five--;
					}
					else
					{
						flag++;
					}
				}
				else if(a[i]==15)
				{
					if(ten>0)
					{
						fif++;
						ten--;
					}
					else if(ten==0 && five>1)
					{
						fif++;
						five=five-2;
					}
					else
					{
						flag++;
					}
				}
			}
		}
		else
		{
			flag++;
		}
		if(flag==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}