#include <stdio.h>
#include <math.h>
int main()
{
    int num, num1,num2,l,u,sum,count,r;
    printf("Enter lower limit and upper limit of the range respectively:");
    scanf("%d%d",&l,&u);
    printf("The Armstrong numbers in this range are:");
    for (num = l; num < u; num++)
    {
        sum=0;
        count=0;
        (num1)=num;
        while ((num1) != 0)
        {
            (num1) = (num1) / 10;
            count++;
        }
        (num2) = num;
        while ((num2) != 0)
        {
            r = (num2) % 10;
            sum = sum + (int)(pow(r, count) + 0.5);
            (num2) = (num2) / 10;
        }
        if (sum == num)
        {
            printf("%d ",num);
        }
    }
    return 0;
}