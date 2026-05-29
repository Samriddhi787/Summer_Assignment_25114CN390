#include <stdio.h>
int main()
{
    int num,num1,i,r,rev=0;
    printf("Enter the number you want to check:");
    scanf("%d",&num);
    num1=num;
    while((num1)!=0)
    {
        r=(num1)%10;
        rev=rev*10+r;
        (num1)=(num1)/10;
    }
    printf("The reverse of the given number is:%d\n",rev);
    if(num==rev)
    {
        printf("The entered number is a palindrome");
    }
    else
    {
        printf("The entered number is not a palindrome");
    }
    return 0;
}