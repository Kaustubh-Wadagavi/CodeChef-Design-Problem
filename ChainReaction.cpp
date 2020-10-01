#include <bits/stdc++.h>

using namespace std;

int main(){
   
    int t;
    cin>>t;
   
    while( t--){
        int r,c;
        cin>>r>>c;
        int arr[r][c];
        for( int i = 0; i < r; i++){
            for( int j = 0; j < c; j++ ){
                cin>>arr[i][j];
            }
        }

        int flag = 1;
        for( int i = 0; i < r; i++){
            for( int j = 0; j < c; j++ ){
                if( (i == 0 || i == r-1 ) && (j == 0 || j == c-1) && arr[i][j]>=2){
                    flag = 0 ;
                    break;
                }
                else if ( arr[0][j]>2||arr[r-1][j]>2||arr[i][0]>2||arr[i][c-1]>2){
                    flag = 0;
                    break;
                }
                else if( arr[i][j] >= 4){
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 0){
            cout<<"Unstable"<<endl;
        }
        else{
           cout<<"Stable"<<endl;
        }

    }
  return 0;
}