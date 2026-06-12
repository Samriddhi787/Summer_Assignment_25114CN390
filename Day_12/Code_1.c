#include <stdio.h>
int palindrome(int n)
{
    int i,r,count=0,rev=0,num;
    num=n;
    while(num!=0)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    if(n==rev)
    {
        printf("The number is palindrome number");
    }
    else
    {
        printf("The number is not a palindrome number");
    }

}
int main()
{
    int number;
    printf("Enter any number:");
    scanf("%d",&number);
    palindrome(number);
    return 0;
}