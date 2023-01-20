#include <stdio.h>
int checkPrime(int n)
{
    int i, count = 0;
    for(i=2; i<n; ++i)
    {
        // check for non prime number
        if(n%i==0)
        {
            count=1;
            break;
        }
    }
    if (count==0)
        return 0;
    else
        return 1;}
int main()
{
int n1,n2,n3=1,t,ans;
scanf("%d%d",&n1,&n2);
t=n1+n2+n3;
ans=checkPrime(t);
while(ans){
n3 = n3+1;
t=n1+n2+n3;
ans=checkPrime(t);
}
printf("%d",n3);
}