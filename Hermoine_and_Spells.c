#include<stdio.h>
int main()
{
    int a,b,c,s1,s2,s3,s;
    scanf("%d%d%d",&a,&b,&c);
    s1=a+b;
    s2=b+c;
    s3=a+c;
    if(s1>s2&&s1>s3) s=s1;
    else if(s2>s1&&s2>s3) s=s2;
    else s=s3;
    printf("%d",s);
}