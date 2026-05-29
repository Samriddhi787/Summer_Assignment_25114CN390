#include <stdio.h>
int main()
{
   int num,i,r,product=1;
    printf("Enter the number you want the product of digits of:");
    scanf("%d",&num);
    while(num!=0)
    {
        r=num%10;
        product=product*r;
        num=num/10;
    }
    printf("The product of digits of the given number is:%d",product);
    return 0;
}