#include <iostream>
using namespace std;
long long int pow(int n){
    long long int mul=1;
    for(int i=1;i<=n;i++)
    mul=mul*2;
    return mul;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    n--;
	    long long int p=n/26;
	    p=pow(p);
	    int m=n%26;
	    if(m>=0 && m<2)
	    cout<<p<<" "<<0<<" "<<0;
	    else if(m>=2 && m<10)
	    cout<<0<<" "<<p<<" "<<0;
	    else
	    cout<<0<<" "<<0<<" "<<p;
	    cout<<endl;
	}
	return 0;
}
