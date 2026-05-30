#include <stdio.h>
int main()
{
    int i, n, d,flag=0;
    printf("Enter the number to be checked:");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("The entered number should be greater than 1");
    }
    else
    {
        for (i=2;i<n;i++)
        {
            d = n % i;
            if(d==0)
            {
            flag=1;
            break;
            }
        }
        if (flag==1)
        {
            printf("The given number is not a prime number\n");
        }
        else
        {
            printf("The given number is a prime number\n");
        }
    }
    return 0;
}