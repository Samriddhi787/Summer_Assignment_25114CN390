#include <stdio.h>
int main()
{
    int num,i,r,rev=0;
    printf("Enter the number you want the reverse of:");
    scanf("%d",&num);
    while(num!=0)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    printf("The reverse of the given number is:%d",rev);
    return 0;
}