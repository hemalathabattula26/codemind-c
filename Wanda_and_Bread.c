#include<stdio.h>
int main()
{
    int n,k,m,x;
    scanf("%d%d%d",&n,&m,&k);
    x=(m*k)-n;
    if(x>=0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}