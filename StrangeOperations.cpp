#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int N,K;
		int sum=0;
		vector<int>v;
		cin>>N>>K;
		for(int j=0;j<N;j++)
		{
			int x;
			cin>>x;
			sum+=x;
		}
		if(K==1 && sum%2==0)
		{
			cout<<"odd"<<endl;
			continue;
		}
		else
		{
			cout<<"even"<<endl;
			continue;
		}
	}
	return 0;
}