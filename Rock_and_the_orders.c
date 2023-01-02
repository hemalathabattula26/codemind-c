#include<stdio.h>
int main()
{
    int d,c,a1,a2,a3,b1,b2,b3,A,B;
    scanf("%d%d%d%d%d%d%d%d",&d,&c,&a1,&a2,&a3,&b1,&b2,&b3);
    A=a1+a2+a3;
    B=b1+b2+b3;
    if(A<=150&&B<=150)
    {
        printf("NO");
    }
    else if(A>=150&&B>=150)
    {
       if(c<(2*d))
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        if(c<d)
        printf("YES");
        else
        printf("NO");
    }
}