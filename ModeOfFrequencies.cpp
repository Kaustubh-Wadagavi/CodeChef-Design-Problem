#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        unordered_map<int,int>g;
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
        g[a[i]]++;
        }
        unordered_map<int,int>g1;
        for(auto it=g.begin();it!=g.end();it++)
        {
            g1[it->second]++;
        }
        int max=INT_MIN,ele;
        for(auto it=g1.begin();it!=g1.end();it++)
        {
            if(it->second>max)
            {
                max=it->second;
                ele=it->first;
            }
            else if(it->second==max)
            {
                if(it->first<ele)
                {
                    ele=it->first;
                }
            }
        }
        cout<<ele<<"\n";
    }
	return 0;
}
