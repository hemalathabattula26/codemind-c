#include<stdio.h>
int main()
{
    int n,a,b,c,d;
    scanf("%d",&n);
    a=n/100;
    b=n/10;
    c=n%10;
    d=b%10;
    if(a%2==0&&d%2==0&&c%2==0)
    {
        printf("Even");
    }
    else if(a%2!=0&&d%2!=0&&c%2!=0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}