#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,min,max;
	    cin>>n;
	    
	    int arr[n];
	    cin>>arr[0];
	    min=max=arr[0];
	    
	    for(int i=1;i<n;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]<min)
	        {
	            min=arr[i];
	        }
	        if(arr[i]>max)
	        {
	            max=arr[i];
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==min || arr[i]==max)
	        {
	            cout<<arr[i]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
