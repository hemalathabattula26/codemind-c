#include<stdio.h>
int main()
{
    int n,ans;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        ans=ans^a[i];
    }
    printf("%d",ans);
}