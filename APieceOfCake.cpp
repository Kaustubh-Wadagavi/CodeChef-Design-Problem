#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int a[27]={0},n,c=0;
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			a[s[i]-'a']++;
		}
		n=s.size();
		sort(a,a+26);
		for(int i=25;i>=0;i--)
		{
			if(a[i]==n-a[i])
			{
				c=1;
				break;
			}
			if(a[i]==0)
			break;
		}
		if(c==1)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}