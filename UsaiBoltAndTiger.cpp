#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long int t;
	cin>>t;
	while(t--){
	
	    int f,d,t,b;
	    cin>>f>>d>>t>>b;
	    double fb = (((double)(f*1.0))/(b*1.0));
	    double ft = sqrt(2*(double)(f+d)/(double)(t*1.0));
	    if(fb<ft)cout<<"Bolt"<<'\n';
    else
    cout<<"Tiger\n";
	}
	return 0;
}