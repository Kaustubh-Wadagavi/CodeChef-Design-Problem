#include<iostream>
#include<set>
using namespace std;

int main() {
    int t;
    cin >> t;    
    while(t--) {
        int n;
        cin >> n;
        set<int> s;
        int count = 0;
        for(int i = 0; i < n; i++) {
            int size;
            cin >> size;
            if(size > 0) {
                s.insert(size);
            }
        }
        cout << s.size() << endl;
    }

    return 0;
}