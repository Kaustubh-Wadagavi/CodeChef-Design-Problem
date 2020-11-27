#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		ll i = 0, j = 0, cnta = 0, cntb = 0, cnt=0;
		char c, prev = 'd';
		for (i = 0; i < s.size(); i++)
		{
			if (s[i] == '.')  cnt++;
			else
			{
				if (s[i] == 'A')
                    cnta++;
				else
                    cntb++;

				if (s[i] == 'A')
				{
					if(prev == 'A')
                        cnta += cnt;
				}
				else
				{
					if(prev == 'B')
                        cntb += cnt;
				}
				cnt = 0;
				prev = s[i];
			}
		}
		cout << cnta << " " << cntb << endl;
	}
	return 0;
}