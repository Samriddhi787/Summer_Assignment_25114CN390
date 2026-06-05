#include <stdio.h>
int main()
{
    int num,n=1, power,i;
    printf("Enter any number:");
    scanf("%d",&num);
    printf("Enter the power to be calculated:");
    scanf("%d",&power);
    for(i=1;i<=power;i++)
    {
        n=n*num;
    }
    printf("Calculated answer:%d",n);
    return 0;
}