#include <stdio.h>
int prime(int n)
{
    int i,flag=0;
    for(i=2;i<n;i++)
    {
       if(n%i==0)
       {
        flag=1;
        break;
       }
    }
    if(flag==1)
    {
        printf("%d is not a prime number", n);
    }
    else
    {
        printf("%d is a prime number", n);
    }
}
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    prime(num);
    return 0;
}