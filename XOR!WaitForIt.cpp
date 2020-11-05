#include<bits/stdc++.h>
using namespace std;

long long int findXOR(long long int n) 
{ 
    int mod = n % 4; 
 
    if (mod == 0) 
        return n; 
  
    
    else if (mod == 1) 
        return 1; 
  
    else if (mod == 2) 
        return n + 1; 

    else if (mod == 3) 
        return 0; 
} 
   
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--)
	{
		long long int l,r;
		cin>>l>>r;

		long long ans=findXOR(l - 1) ^ findXOR(r);

		if  (ans%2==0)
		cout<<"Even\n";
		else
		cout<<"Odd\n";
	}
}

