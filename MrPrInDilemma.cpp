#include <iostream>
#define ll long long 
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    ll int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    
	        int x=abs(a-b);
	        int y=abs(c-d);
	        if (x==0){
	        cout<<"YES"<<endl;
	        continue;
	        }
	        if(y==0){
	        cout<<"NO"<<endl;
	        continue;
	        }
	        if(x%y==0)
	        cout<<"YES"<<endl;
	        else 
	        cout<<"NO"<<endl;
	}
	return 0;
}
