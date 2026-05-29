#include <stdio.h>
int main()
{
    int num,num1,num2,count=0,i,sum=0,r;
    printf("Enter the number you want sum of digits of:");
    scanf("%d", &num);
    num1=num;
    while((num1)!=0)
    {
    (num1)=(num1)/10;
        count++;
    }
    num2=num;
    for(i=0;i<count;i++)
    {
        r=(num2)%10;
        sum=sum+r;
        (num2)=(num2)/10;
    }
    printf("The sum of digits of %d is:%d",num,sum);
    return 0;
}
