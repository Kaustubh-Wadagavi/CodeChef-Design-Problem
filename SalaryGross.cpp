#include <stdio.h>

int main(void) 
{
  int t;
  float n;
  scanf("%d",&t);
  while(t--)
  {
    float hra=0,da=0,gross=0;
    scanf("%f",&n);
    if(n<1500)
    {
      hra=(n*10*0.01);
      da=n*90*0.01;
      gross=hra+da+n;
      printf("%0.2f\n",gross);
    }
    else if(n>=1500 && n<=100000)
    {
      hra=500;
      da=n*98*0.01;
      gross=hra+da+n;
      printf("%0.2f\n",gross);
    }
    
  }
  return 0;
}