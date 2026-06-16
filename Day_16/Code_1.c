/*Write a program to Find missing number in array. */
#include <stdio.h>
int main()
{
    int a[100],i,n,swap,j;
    printf("Enter the number of inputs:");
    scanf("%d",&n);
    printf("Enter the inputs of successive elements in a range:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                swap = a[j];
                a[j] = a[j + 1];
                a[j + 1] = swap;
            }
        }
    }
    printf("The missing number is ");
    for(i=1;i<n;i++)
    {
        if(a[i+1]==a[i]+1)
        {
            continue;
        }
        else
        {
            printf("%d",(a[i]+1));
        }
    }
    return 0;
}