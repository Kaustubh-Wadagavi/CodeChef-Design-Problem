#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        cin.ignore();

        unordered_map<string, pair<int, int>> check;
        string input;

        int c, sum = 0;

        for (int i = 0; i < num; i++)
        {
            cin >> input;
            cin >> c;
            
            if (c == 1)
                check[input].first++;
            else
                check[input].second++;
            
        }
        for (auto itr = check.begin(); itr != check.end(); itr++)
        {
            sum += max((itr->second).first, (itr->second).second);
        }
        cout << sum << "\n";
    }
}