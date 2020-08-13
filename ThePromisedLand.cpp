#include <iostream>
using namespace std;

int main() 
{
	int t; cin>>t;
	while(t--)
	{
	    int n, m, x, y, s;
	    cin>>n>>m>>x>>y>>s;
	    
	    long long int sum_row = 0, sum_col = 0, prev_row = 0, prev_col = 0;
	    for(int i=0; i<x; i++)
	    {
	        int ele_row; cin>>ele_row;
	        sum_row += (ele_row - prev_row - 1)/s;
	        prev_row = ele_row;
	    }
	    sum_row+= (n - prev_row)/s;
	    
	    for(int i=0; i<y; i++)
	    {
	        int ele_col; cin>>ele_col;
	        sum_col += (ele_col - prev_col - 1)/s;
	        prev_col = ele_col;
	    }
	    sum_col+= (m - prev_col)/s;
	    
	    cout<<sum_row*sum_col<<endl;
	    
	}
	return 0;
}