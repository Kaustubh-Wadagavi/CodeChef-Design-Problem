#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;

void solve()
{
    int n;
    cin >> n; 
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    ll arr1[m];
    for(int i=0;i<m;i++)
    {
        cin >> arr1[i];
    }

    int i=0;
    int j=0;
    bool sub = true;
    while(i!=n && j!=m)
    {
        if(arr[i]==arr1[j])
        {
            j++;
        }
        i++;
    }
    if(j!=m)
    {
        sub = false;
    }
    sub ? cout << "Yes": cout << "No";
}
 
int main() 
{ 
    int t;
    cin >> t;
    while (t--) 
    { 
        solve(); 
        cout << "\n"; 
    } 
    return 0; 
} 
