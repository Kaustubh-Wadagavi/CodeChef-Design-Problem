#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],brr[101]={0};
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            brr[arr[i]]++;
        }
        sort(brr,brr+101);
        cout<<n-brr[100]<<endl; 
    }
	return 0;
}
