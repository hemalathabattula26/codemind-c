#include<stdio.h>
int main()
{
    int n,sq1,sq2,r,s=0,rem,sum=0;
    scanf("%d",&n);
    sq1=n*n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    sq2=s*s;
    while(sq2!=0)
    {
        rem=sq2%10;
        sum=sum*10+rem;
        sq2=sq2/10;
    }
    if(sq1==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}