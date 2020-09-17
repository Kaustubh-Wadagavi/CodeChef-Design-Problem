#include <iostream>
#include<bits/stdc++.h>
#include<sstream>
#include<cmath>
#include<string>

using namespace std;

int main(){
    //cout << "kodar_rish" << endl;
    int t;
    cin >> t;
    while(t--){
        int n,time = 0;
        cin >> n;
        string s;
        map<string, int> m;
        for(int i = 0; i < n ; i++){
            cin >> s;
            if(m.find(s)!=m.end()){
                time += (m[s])/2;
                continue;
            }
            int temp_time = 2;
            for(int j = 0; j < s.size()-1; j++){
                char c = s.at(j);
                char c1 = s.at(j+1);
                if((c=='j' || c=='k') && (c1=='j' || c1=='k')){
                    temp_time += 4;
                }
                else if((c=='d' || c=='f') && (c1=='d' || c1=='f')){
                    temp_time += 4;
                }
                else{
                    temp_time += 2;
                }
            }
            time += temp_time;
            m[s] = temp_time;
        }
        cout << time << endl;
    }
}
