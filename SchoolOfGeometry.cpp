#include <bits/stdc++.h> 
using namespace std;

int min(int a, int b)
{
    if(a>b)
    return b;
    return a;
}

int main() {
	
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    long long A[n],B[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> A[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin >> B[i];
	    }
	    sort(A,A+n);
	    sort(B,B+n);
	    long long sum=0;
	    for(int i=0;i<n;i++)
	    {
            sum += min(A[i],B[i]);	        
	    }
	    cout << sum << endl;
	}
	return 0;
}
