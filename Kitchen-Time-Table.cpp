#include <iostream>
using namespace std;

int main() 
{
	int t,i,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr1[n+1]={};
	    int arr2[n+2]={};
	    for(i=0; i<n; i++)
	    {
	        cin>>arr1[i];
	    }
	    
	    for(i=0; i<n; i++)
	    {
	        cin>>arr2[i];
	    }
	    int count=0;
	    for(i=0; i<n; i++)
	    {
	        if((arr1[i+1]-arr1[i])>=arr2[i+1])
	        {
	            count++;
	        }
	    }
	    
	    if(arr1[0]>=arr2[0])
	    {
	        count=count+1;
	    }
	  cout<<count<<endl;
	}
	return 0;
}
