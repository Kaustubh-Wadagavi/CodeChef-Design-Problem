#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
#include <iomanip>      
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,K;
        cin>>N>>K;
        vector <int> jivendra(N);
        for(int i=0;i<jivendra.size();i++) cin>>jivendra[i];
        sort(jivendra.begin(),jivendra.end());
        jivendra.erase (jivendra.begin(),jivendra.begin()+K);
        for(int i=0;i<K;i++) jivendra.pop_back();
        double sum = accumulate(jivendra.begin(),jivendra.end(),0);
        double ans = (sum/(N-2*K));
        cout<<fixed<<setprecision(6)<<ans<<endl;
    }
    return 0;
}
