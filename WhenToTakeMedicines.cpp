#include <iostream>
using namespace std;

int leap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    return 1;
    else 
    return 0;
}

int main()
{
    int t;
    cin >>  t;

    while (t--)
    {
        int d, m, y;
        char c, cc;
        int med;
        cin >> y >> c >> m >> cc >> d;
        if (leap(y))
        {
            if (m == 2)
            {
                med = ((29 -d)/2) + 1;
            }

            else if (m == 4 || m == 6 || m == 9 || m == 11)
            {
                med = ((30 - d + 31)/2) + 1;
            }

            else 
            {
                med = ((31 - d)/2) + 1;
            }
        }

        else
        {
            if (m == 2)
            {
                med = ((28 - d + 31)/2) + 1;
            }

            else if (m == 4 || m == 6 || m == 9 || m == 11)
            {
                med = ((30 - d + 31)/2) + 1;
            }

            else
            {
                med = (( 31- d)/2) + 1;
            }
            
        }
        cout << med << endl;
        
    }
    return 0;
}