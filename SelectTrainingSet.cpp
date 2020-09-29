#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        multiset<pair<string,int>> s;
        for(int i=0;i<n;i++){
            string s1;
            int a;
            cin>>s1>>a;
            s.insert({s1,a});
        }
        ll ans=0;
        int prev=-1;
        string prevstring="1";
        for(auto i: s){
            string p=i.first;
            if(prevstring!=p) prev=-1;
            int q=i.second;
            int r;
            if(q==0) r=1;
            else r=0;
            if(prev==-1){
                if(s.count({p,r})==0){
                    ans+=s.count({p,q});
                }
                else ans+=max(s.count({p,q}),s.count({p,r}));
            }
            prevstring = p;
            prev=0;
        }
        cout<<ans<<"\n";
    }
}