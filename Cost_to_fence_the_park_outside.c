#include<stdio.h>
int main()
{
    int l,b,c,w,ar1,ar2,ar,x;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    ar1=l*b;
    ar2=(l+(2*w))*(b+(2*w));
    ar=ar2-ar1;
    x=c*ar;
    printf("%d",x);
}