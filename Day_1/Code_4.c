#include <stdio.h>
int main()
{
    int count=0,num;
    printf("Enter the number you want to know number of digits of:");
    scanf("%d",&num);
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    printf("Number of digits in the given number is %d",count);
    return 0;
}