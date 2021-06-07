#include <iostream>
#include<bits/stdc++.h> 
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        int x = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                s[x] = toupper(s[x]);
                x++;
                s[x] = '.';
                x++;

                while (s[x] != ' ') 
                {
                    s.erase(x, 1);
                }
                i = x;

                x++;
            }
        }
        s[x] = toupper(s[x]);
        x++;
        for (int k = x; k < s.length(); k++)
        {
            s[k] = tolower(s[k]);
        }

        cout<<s<<endl;
    }
	return 0;
}
