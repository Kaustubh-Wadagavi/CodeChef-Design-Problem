#include <iostream>
using namespace std;

int main() 
{
	int l,b,Area,Peri;
	cin>>l>>b;
    Area=l*b;
    Peri=2*(l+b);
	if(Area>Peri)
	{
	    cout<<"Area"<<"\n"<<Area;
	}
	else if(Peri>Area)
	{
	    cout<<"Peri"<<"\n"<<Peri;
	}
	else
	{
	    cout<<"Eq"<<"\n"<<Area;
	}
	return 0;
}
