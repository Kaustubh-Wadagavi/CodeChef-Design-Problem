#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, read[27] = {0};
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        read[str[i] - 'a'] = 1;
    }
    cin >> t;
    while (t--)
    {
        cin >> str;
        bool pos = true;
        for (int i = 0; i < str.length(); i++)
        {
            if (read[str[i] - 'a'] == 0)
            {
                pos = false;
            }
        }
        if (pos)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}