#include <iostream>
#include <string>
using namespace std;

void vowelorconso(string c)
{
    if(c=="A"||c=="E"||c=="I"||c=="O"||c=="U")
    {
        cout << "Vowel";
    }
    else
    {
        cout << "Consonant";
    }
}
int main()
{
    string c;
    cin >>c;
    vowelorconso(c);
}
