#include <iostream>
using namespace std;

int getSum(int n)
{
    int sum = 0; 
    while (n != 0) 
    { 
     sum = sum + n % 10; 
     n = n/10; 
    }
    return sum; 
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,chefPoint=0,mortyPoint=0;
	    cin>>n;
	    while(n--)
	    {
	        int chef,morty;
	        cin>>chef>>morty;
	        int t1=getSum(chef);
	        int t2=getSum(morty);
	        //cout<<t1<<" "<<t2<<endl;
	        if(t1<t2)
	        {   
	            mortyPoint++;
	        }
	        else if(t1>t2)
	        {
	            chefPoint++;
	        }
	        else
	        {
	            chefPoint++;
	            mortyPoint++;
	        }
	    }
	    if(chefPoint>mortyPoint)
	    {
	        cout<<0<<" "<<chefPoint<<endl;
	    }
	    else if(mortyPoint>chefPoint)
	    {
	        cout<<1<<" "<<mortyPoint<<endl;
	    }
	    else
	    {
	        cout<<2<<" "<<chefPoint<<endl;
	    }
	}
	return 0;
}
