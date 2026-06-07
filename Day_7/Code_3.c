#include <stdio.h>
int sum(int m)
{
    if(m==0)
    {
        return 0;
    }
    else
    {
        return m%10+sum(m/10);
    }
}
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    printf("The sum of the entered digits of a number is:%d", sum(num));
    return 0;
}
