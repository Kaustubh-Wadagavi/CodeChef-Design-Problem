#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    float root1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	float root2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	
	cout<<fixed<<setprecision(6)<<root1<<endl<<fixed<<setprecision(6)<<root2;
}