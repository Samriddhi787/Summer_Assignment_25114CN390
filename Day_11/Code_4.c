#include <stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    printf("The factorial of the given number is:%d",fact(num));
    return 0;
}