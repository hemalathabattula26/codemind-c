#include<stdio.h>
#include<math.h>
int main()
{
    int n,s,sq,sum,d;
    scanf("%d",&n);
    s=n*(n+1)/2;
    sq=pow(s,2);
    sum=n*(n+1)*((2*n)+1)/6;
    d=sq-sum;
    printf("%d",d);
}