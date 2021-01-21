#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f first
#define s second

void solve()
{
   int n,k;
   cin>>n>>k;
   vector <pair<string,string>> v;
   for(int i=0;i<n;i++){
    string st,def="NO";
    cin>>st;
    v.push_back({st,def});
   }
   while(k--){
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        string sam;
        cin>>sam;
        for(int j=0;j<n;j++){
            if(sam==v[j].f)   {v[j].s="YES";break;}
        }
    }
   }
   for(auto it:v){
    cout<<it.s<<" ";
   }
    cout<<"\n";
}
int main()
{
	fast
	int t;cin>>t;while(t--)
	solve();
	return 0;
}
