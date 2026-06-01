#include <stdio.h>
int main()
{
    int n,i,d,sum=0;
    printf("Enter any number:");
    scanf("%d",&n);
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
    return 0;
}