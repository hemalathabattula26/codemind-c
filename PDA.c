#include<stdio.h>
int main()
{
    int n,i,c,sum=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if (n%i==0)
        {
            c=i;
            sum=c+sum;
        }
    }
    if (sum==n)
    {
        printf("PERFECT");
    }
    else if(sum<n)
    {
        printf("DEFICIENT");
    }
    else
    {
        printf("ABUNDANT");
    }
}