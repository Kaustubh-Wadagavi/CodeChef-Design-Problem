#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int* a1 = new int[n];
        int* a2 = new int[n];
        for(int i =0 ; i<n ; i++)
        {
            cin>>a1[i];
        }
        for(int i =0 ; i<n ; i++)
        {
            cin>>a2[i];
        }
        int max = 0 , ans = 0 ,r =0;
        for(int i = 0 ; i<n ; i++)
        {
            int p = a1[i]*a2[i];
            if(p>max)
            {
                max = p ;
                r = a2[i];
                ans =i;
            }
            else if(p == max)
            {
                if(a2[i] > r)
                {
                    r = a2[i];
                    ans = i;
                }
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
    
}