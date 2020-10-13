#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string p;
        cin>>p;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    if(p=="Dee" && n==1 && a[0]%2==0)
	    cout<<"Dee"<<endl;
	    else
	    cout<<"Dum"<<endl;
    }
	return 0;
}