#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int arr[n],count=k;
        for(int i=0; i!=n; i++) cin>>arr[i];
        sort(arr,arr+n,greater<int>());
        for(int i=k; i!=n; i++){
            if(arr[i]==arr[k-1]) count++;
            else break;
        }
        cout<<count<<endl;
    }
	return 0;
}
