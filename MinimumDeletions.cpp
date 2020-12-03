
#include<iostream>
#include<math.h>
#include <algorithm>
using namespace std;

int del(int arr[],int n)
{
	int res;
	for(int i=0;i<n-1;i++)
	{
		res = __gcd(arr[i],arr[i+1]);
	}
	
	if(res == 1)
	{
		cout<<"0"<<endl;
	}
	else if(res!=1)
	{
		cout<<"-1"<<endl;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		del(arr,n);
	}
}