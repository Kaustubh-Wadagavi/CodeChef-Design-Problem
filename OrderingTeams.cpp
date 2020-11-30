#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int compare(int p[3], int q[3])
{
    if(p[0]==q[0] && p[1]==q[1] && p[2]==q[2])
    {
        return 0;
    }
    else if(p[0]>=q[0] && p[1]>=q[1] && p[2]>=q[2])
    {
        return 1;
    }
    else if(p[0]<=q[0] && p[1]<=q[1] && p[2]<=q[2])
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int main() 
{
	
	int T;
	cin>>T;
	while(T--)
	{
	    int p1[3], p2[3], p3[3];
	    int count=0;
	    for(int i=0; i<3; i++)
	    {
	        cin>>p1[i];
	    }
	    for(int i=0; i<3; i++)
	    {
	        cin>>p2[i];
	    }
	    for(int i=0; i<3; i++)
	    {
	        cin>>p3[i];
	    }
	    
	    count+=compare(p1, p2);
	    count+=compare(p2, p3);
	    count+=compare(p1, p3);
	    
	    if(count==3)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
