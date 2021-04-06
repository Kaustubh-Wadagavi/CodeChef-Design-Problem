#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k, ans = 0;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for(int i = 0; i < n; i++)
		{
			if(a[i] % 2 == 0)
			{
				ans++;
			}
		}
		if(ans < k || (ans == n && k == 0))
		{
			cout << "NO" << '\n';
		}
		else
		{
			cout << "YES" << '\n';
		}
	}
}