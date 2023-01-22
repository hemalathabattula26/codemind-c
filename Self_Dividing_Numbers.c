#include<stdio.h>
int main()
{
    int n,i,l,q,r,c=0,t=0;
    scanf("%d%d",&l,&n);
    for(i=l;i<=n;i++)
    {
        q=i;
        c=0;
        t=0;
        while(q!=0)
        {
            c=c+l;
            r=q%10;
            if(r!=0&&i%r==0)
            {
                t=t+l;
            }
            q=q/10;
        }
        if(c==t)
        {
            printf("%d ",i);
        }
    }
}