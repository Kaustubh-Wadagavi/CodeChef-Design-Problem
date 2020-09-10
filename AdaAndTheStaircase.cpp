#include<bits/stdc++.h>
#define int long long
#define p pair<int, int>
#define endl '\n'

using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,b,count=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n-1;i++)
        {
            b=a[i+1]-a[i];
            count+=b/k;
            if(b%k==0)
            count--;
        }
        b=a[0]/k;
        if(a[0]%k==0)
        b--;count+=b;
        cout<<count<<endl;
    }
    return 0;
}
