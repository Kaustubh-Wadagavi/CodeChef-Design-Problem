#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int p,h;
	    cin>>h>>p;
	    int sum=0;
	    while(p>0){
	        sum+=p;
	        p/=2;
	    }
	    if(sum>=h){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
