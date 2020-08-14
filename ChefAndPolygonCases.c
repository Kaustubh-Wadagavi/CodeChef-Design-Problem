#include<stdio.h>

int gcd(int a, int b){
    if(a==0)
        return b;
    return gcd(b%a, a);
}
void reduce(int *a, int *b){
    int temp = gcd(*a, *b);
    *a /= temp;
    *b /= temp;
}
int main()
{
    int n, a, k, x, y, t;
    int num, den;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d %d", &n, &a, &k);
        num = 180*(n-2)*2;
        den = n;
        reduce(&num, &den);
        num -= den*2*a;
        den *= (n-1);
        reduce(&num, &den);
        num *= (k-1);
        num += a*den;
        reduce(&num, &den);
        printf("%d %d\n", num, den);
    }
    return 0;
}
