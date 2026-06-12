#include <stdio.h>
#include <math.h>
int armstrong(int num)
{
    int num1,num2,sum=0,count=0,r;
    num1=num;
    while((num1)!=0)
    {
        (num1)=(num1)/10;
        count++;
    }
    (num2)=num;
    while((num2)!=0)
    {
        r=(num2)%10;
        sum=sum+(int)(pow(r,count)+0.5);
        (num2)=(num2)/10;
    }
    if(sum==num)
    {
        printf("The entered number is an armstrong number");
    }
    else
    {
        printf("The entered number is not an armstrong number");
    }
}
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    armstrong(n);
    return 0;
}