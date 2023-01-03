#include<stdio.h>
int main()
{
    int n,k,m,x;
    scanf("%d%d%d",&n,&k,&m);
    x=n/(m*k);
    if(n%(m*k)==0) printf("%d",x);
    else printf("%d",x+1);
}