#include<stdio.h>
int main()
{
    long long int a,b,i,gcd,lcm;
    scanf("%lld%lld",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        gcd=i;
    }
    lcm=(a*b)/gcd;
    printf("%lld",lcm);
}