#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%3==0)
    {
        if(n%5==0)
        {
            printf("PlingPlang");
        }
        else if(n%7==0)
        {
            printf("PLingPlong");
        }
        else if(n%5==0&&n%7==0)
        {
            printf("PlingPlangPlong");
        }
        else 
        {
            printf("Pling");
        }
    }
    else if(n%5==0)
    {
        if(n%7==0)
        {
          printf("PliangPlong");  
        }
        else
        {
            printf("Plang");
        }
    }
    else if(n%7==0)
    {
        printf("Plong");
    }
    else 
    {
        printf("%d",n);
    }
}