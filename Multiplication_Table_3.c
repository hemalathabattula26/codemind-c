#include<stdio.h>
int main()
{
    int i,m,n,t;
    scanf("%d%d%d",&t,&m,&n);
    for(i=m;i<=n;i++)
    {
        printf("%d x %d = %d
",t,i,t*i);
    }
}