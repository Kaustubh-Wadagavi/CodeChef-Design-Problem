#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int y,m,d;
	    char a,b;
	    scanf("%d%c%d%c%d",&y,&a,&m,&b,&d);
	    if((y%100==0 && y%400==0)||(y%100!=0 && y%4==0))
	    {
	        if(m==2)
	        {
	            d = 29 - d;
	            if(d%2 == 0)
	            {
	                d = d/2;
	            }
	            else
	            {
	                d = (d/2);
	            }
	        }
	        else if((m==4)||(m==6)||(m==9)||(m==11))
	        {
	            d = 30 - d;
	            if(d%2 != 0)
	            {
	                d = d/2;
	                d = d+16;
	            }
	            else
	            {
	                d = (d/2);
	                d = d+15;
	            }   
	            
	        }
	        else
	        {
	            d = 31 - d;
	            if(d%2 == 0)
	            {
	                d = d/2;
	            }
	            else
	            {
	                d = (d/2);
	            }    
	        }
	    }
	    else
	    {
	         if(m==2)
	        {
	            d = 28 - d;
	            if(d%2 != 0)
	            {
	                d = d/2;
	                d = d+16;
	            }
	            else
	            {
	                d = (d/2);
	                d = d+15;
	            }      
	        }
	        else if((m==4)||(m==6)||(m==9)||(m==11))
	        {
	            d = 30 - d;
	            if(d%2 != 0)
	            {
	                d = d/2;
	                d = d+16;
	            }
	            else
	            {
	                d = (d/2);
	                d = d+15;
	            }      
	        }
	        else
	        {
	            d = 31 - d;
	            if(d%2 == 0)
	            {
	                d = d/2;
	            }
	            else
	            {
	                d = (d/2);
	            }    
	        }    
	    }
	    printf("%d\n",d+1);
	}
	return 0;
}