#include <iostream>
using namespace std;
int main()
{
    int t, n, itr = 1;

    cin >> t;
    while (t--)
    {
        cin >> n;
        long long A[n], x[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            x[i] = A[i] >> 16;
        }
        cout << "Case " << itr << ":\n";
        for (int i = 0; i < n; i++)
            cout << A[i] - (x[i] << 16) << " ";
        cout << "\n";
        for (int i = 0; i < n; i++)
            cout << x[i] << " ";
        cout << "\n";
        itr++;
    }
    return 0;
}
