#include <stdio.h>
int fact(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int n,num,i,r,sum=0,f;
    printf("Enter any number:");
    scanf("%d",&n);
    num=n;
    while(num>0)
    {
        r=num%10;
        f=fact(r);
        sum=sum+f;
        num=num/10;
    }
    if(sum==n)
    {
        printf("The entered number is a strong number");
    }
    else
    {
        printf("The entered number is not a strong number");
    }
    return 0;
}