#include <bits/stdc++.h>
using namespace std;

int main() 
{
  while (true)
  {
    int n; cin >> n;
    
    if (!n) break;

    bool isAmb = true;

    int arr1[n], arr2[n];
    for (int i=0; i<n; i++)
    {
      cin >> arr1[i];

      arr2[arr1[i]-1] = i+1;
    }

    for (int i=0; i<n; i++)
    {
      if (arr1[i] != arr2[i])
      {
        isAmb = false;
        break;
      }
    }

    if (isAmb) cout << "ambiguous";
    else cout << "not ambiguous";
    cout << endl;
  }

  return 0;
}