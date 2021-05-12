#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        char c;
        cin >> s;
        
        for (int i = 0; i < (n - 1); i += 2)
        {
            c = s[i];
            s[i] = s[i + 1];
            s[i + 1] = c;
        }
        
        for (int i = 0; i < n; i++)
        {
            s[i] = 'z' - (s[i] - 'a');
        }
        
        for (int i = 0; i < n; i++)
        {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}