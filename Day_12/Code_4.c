#include <stdio.h>
int perfect(int n)
{
    int i,d,sum=0;
    for(i=1;i<n;i++)
    {
        d=n%i;
        if(d==0)
        {
            sum=sum+i;
        }
        else
        {
            continue;
        }
    }
    if(sum==n)
    {
        printf("The given number is a perfect number");
    }
    else
    {
        printf("The given number is not a perfect number");
    }
}
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    perfect(num);
    return 0;
}