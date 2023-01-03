#include<stdio.h>
int main()
{
    int n,i,s=0,sum=0,dif;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0) s=s+a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0) sum=sum+a[i];
    }
    dif=s-sum;
    if(dif>0)
   {
       printf("%d",dif);
   }
   else 
   {
       printf("%d",-dif);
   }
}