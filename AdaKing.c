#include <stdio.h>

int main() {
	int a,b,i,j;
	scanf("%d",&a);
	
	while(a--)
	{
	    scanf("%d",&b);
	    printf("O");
	    b--;
	    for(i=2;i<=8;i++)
	    {
	        if(b>0)
	        {
	            printf(".");
	            b--;
	        }
	        else printf("X");
	    }
	    
	    printf("\n");
	    
	    for(i=2;i<=8;i++)
	    {
	        for(j=1;j<=8;j++)
	        {
	            if(b>0)
	            {
	                printf(".");
	                b--;
	            }
	            else printf("X");
	        }
	        printf("\n");
	    }
	    printf("\n");
	}
	return 0;
}

