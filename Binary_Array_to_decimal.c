#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
            x=pow(2,(n-i-1))*a[i]+x;
    }
    printf("%d",x);
}