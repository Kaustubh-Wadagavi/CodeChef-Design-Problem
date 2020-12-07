

#include <iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T) {
	 int  n, k, x, y;
		cin >> n >> k >> x >> y;
		string result = "NO";
		int temp = n+1;
		while (temp) {
			  
			if ((x) % n == y) {
				result = "YES";
				break;
			}
			temp--;
			x = (x + k);
		}
		cout << result<<endl;
		T--;
	}
}

