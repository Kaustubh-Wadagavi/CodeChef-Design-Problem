#include <bits/stdc++.h>
using namespace std;


int main() 
{
	int t,x,y,M,man,ara[100],i,coun = 0,left,right;

	cin >> t;

	while(t--)
	{
        for(i=0;i<100;i++)
        {
            ara[i]=0;
        }
        cin >> M >> x >> y;
        int s=x*y;

        while(M--)
        {
           cin >> man;

           if(man-s >= 1)
           {
              left = man-s-1;
           }else
           {
              left = 0;
           }
           if(man+s <= 100)
           {
              right  = man+s-1;
           }else
           {
               right =  99;
           }
           for(i=left;i<=right;i++)
           {
              ara[i] = 1;
           }
        }
        
        for(i=0;i<100;i++)
        {
            if(ara[i]==0)
            {
                coun++;
            }
        }
        cout << coun << endl;
        coun  = 0;
	}
	return 0;
}
