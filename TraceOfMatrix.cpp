#include<bits/stdc++.h>
using namespace std;

int mat[100][100];
int n;
void solve()
{
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>mat[i][j];
	int ans=INT32_MIN;
	for(int row=0;row<n;row++)
	{
		for(int col=0;col<n;col++ )
		{
				int f=0;
				int parsum=0;
				for(int dia=max(row,col);dia<n;dia++)
				{
					parsum+=mat[row+f][col+f];
					f++;
					
				}
				ans=max(ans,parsum);
		}
	}
	cout<<ans<<endl;
					
}

int main()
{
	int test;
	cin>>test;
	memset(mat,0,sizeof mat);
	
	while(test--)
	{
		cin>>n;
		solve();
	}
	
}