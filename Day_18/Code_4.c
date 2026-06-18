/*Write a program to Sort array in descending order. */
#include <stdio.h>
int main()
{
    int a[100],i,n,swap,j;
    printf("Enter the number of inputs:");
    scanf("%d",&n);
    printf("Enter the inputs:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[j]<a[j+1])
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
    }
    printf("Sorted array:");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}