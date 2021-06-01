#include <iostream>
using namespace std;

void func()
{
    long long int n,temp;
    long long int sum = 0;
    int f3 = 0, f2 =0,f1 =1;
    cin>>n;
    temp =n;
    while(temp--)
    {
        int a;
        cin>>a;
        if(a<3)
        {
           f1 = 0; 
        }
        if(a==5)
        	 f2=1;
        sum= sum + a;
    }
    double avg;
    avg = sum/n;
    if(avg>=4.0 ){
        f3 = 1;
    }
    if(f3 == 1 && f1 == 1 && f2 == 1)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}

int main() 
{
	
	int p;
	cin>>p;
	
	while(p--)
	{
	    func();
	}
	
	return 0;
}
