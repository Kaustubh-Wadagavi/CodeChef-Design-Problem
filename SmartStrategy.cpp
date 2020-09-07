using namespace std;
#include<iostream>
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){

        int n,q,num;
        cin>>n>>q;
        long long prod=1;
        while(n--){
            cin>>num;
            prod*=num;
        }
        while(q--){
            cin>>num;
            if(prod==0)
                cout<<"0"<<" ";
            else
                cout<<num/prod<<" ";
        }
    cout<<"\n";
    }
}
