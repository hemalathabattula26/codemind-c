#include<stdio.h>
#include<math.h>
int main()
{
    float i,a,b,sum=0,c;
    scanf("%f%f",&a,&b);
    for(i=a;i<=b;i++)
    {
        c=sqrt(i);
        sum=c+sum;
    }
    printf("%.2f",sum);
}