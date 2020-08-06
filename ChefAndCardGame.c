#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,cs,ms,chef=0,monty=0;
        int sum();
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d %d",&cs,&ms);
            if(sum(cs)>sum(ms))
                chef++;
            else if(sum(cs)<sum(ms))
                monty++;
            else{
                chef++;
                monty++;
            }
        }
    if(chef>monty)
    printf("0 %d",chef);
    else if(chef<monty)
    printf("1 %d",monty);
    else
    printf("2 %d",chef);
    printf("\n");
    }
    
    return 0;
}

int sum(int x)
{
    int i,a,c=0;
    for(i=x;i>0;i/=10)
    {
        a=x%10;
        x=x/10;
        c=c+a;
    }
    return c;
}
