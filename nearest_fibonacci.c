#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=0,b=1,c,i;
    scanf("%d",&n);
    for(i=0;i<n-2;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c>n)
        {
            if(abs(c-n)>abs(n-a))
            {
                printf("%d",a);
                break;
            }
            else if(abs(c-n)==abs(n-a))
            {
                printf("%d %d",a,c);
                break;
            }
            else
            {
                printf("%d ",c);
                break;
            }
        }
    }
}