#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int arr[n],sum=0,sum1=0;
        for(int i=1;i<=n;i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
       
        for(int i=1;i<=n;i++)
        {
            if(arr[i]>k)
            {
                arr[i]=k;
            }
            sum1+=arr[i];
            
        }
        
        cout << sum-sum1 << endl;
    }

	return 0;
}
