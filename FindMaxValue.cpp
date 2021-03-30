#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{ 
	    vector<long int>v;
	    while(true)
	    {
	    	int x;
	    	cin>>x;
	    	v.push_back(x);
	    	char c = getchar();
	    	if(c!= ' ')
	    	{
	    	   break;
	    	}
	}
	sort(v.begin(),v.end());
	int s = v.size();
	if(s-1==v[s-1])
	{
	   cout<<v[s-2]<<endl;
	}
    else 
    {
        cout<<v[s-1]<<endl;
    }
    t--;
  }
}