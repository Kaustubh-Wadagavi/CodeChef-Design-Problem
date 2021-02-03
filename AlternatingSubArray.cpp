#include<iostream>
#include<vector>
#define ll long long int

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<ll> v1;
		for(ll i=0;i<n;i++)
		{
			int data;
			cin>>data;
			v1.push_back(data);

		}
		vector<ll> v2(n,1);
		
		for(ll i=n-1;i>0;i--)
		{
			if((v1[i]<0 && v1[i-1]>0)||(v1[i]>0 && v1[i-1]<0))
				v2[i-1]+=v2[i];
			
		}
		
		for(ll i=0;i<n;i++)
		{
			cout<<v2[i]<<" ";
		}
		cout<<endl;


	}

	
    
}