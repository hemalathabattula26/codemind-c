#include<stdio.h>
int main()
{
    int n,k,x,y,h;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    if(y>x)
    {
        printf("%d",x*n);
    }
    else
    {
        printf("%d",(x*k+y*(n-k)));
    }
}