#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() 
{
	
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    string f[n],d[n];
	    int z[n]={0};
	    for(int j=0;j<n;j++)
	    {
	        cin>>f[j]>>d[j];
	    }
	    for(int k=0;k<n;k++)
	    {
	        for(int l=k+1;l<n;l++)
	        {
	            if(f[k]==f[l])
	            {z[k]++;z[l]++;}
	        }
	    }
	    for(int y=0;y<n;y++)
	    {
	        if(z[y]>0)
	        {
	            cout<<f[y]+" "+d[y]<<endl;
	            
	        }
	        else
	        {
	            cout<<f[y]<<endl;
	            
	        }
	    }
	   
	}
	return 0;
}
