#include<bits/stdc++.h>
using namespace std;
# define ll long long
ll c=1;
void solve(){
    ll n,m,rx,ry,i,j,x=0,y=0,l;
    string s;
    cin>>n>>m>>rx>>ry>>l>>s;
    for(i=0;i<s.length();i++){
        if(s[i]=='U')
        y+=1;
        else if(s[i]=='D')
        y-=1;
        else if(s[i]=='L')
        x-=1;
        else if(s[i]=='R')
        x+=1;
    }
    cout<<"Case "<<c<<": ";
    if((x>n||y>m)||(x<0||y<0))
    cout<<"DANGER\n";
    else if(x==rx&&y==ry)
    cout<<"REACHED\n";
    else
    cout<<"SOMEWHERE\n";
    c+=1;
}
int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}