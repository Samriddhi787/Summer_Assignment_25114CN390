#include <stdio.h>
int main()
{
    int i, sum = 0, n;
    printf("Enter the number of integers you want the sum of ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The sum of %d integers is %d", n, sum);
    return 0;
}