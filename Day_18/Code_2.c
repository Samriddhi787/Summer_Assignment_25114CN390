/*Write a program to Selection sort.*/
#include <stdio.h>
int main()
{
    int a[100],i,n,swap,j,min;
    printf("Enter the number of inputs:");
    scanf("%d",&n);
    printf("Enter the inputs:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        min=i;
        for(j=(i+1);j<=n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap=a[i];
            a[i]=a[min];
            a[min]=swap;
        }
    }
    printf("Sorted array:");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}