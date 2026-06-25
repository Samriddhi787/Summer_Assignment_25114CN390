/*Write a program to Merge two sorted arrays. */
#include <stdio.h>
#include <string.h>
int main()
{
    int a[100],i,j,n1,n2,b[100],swap,c[100];
    printf("Enter the number of elements in the 1st array:");
    scanf("%d",&n1);
    printf("Enter the 1st array:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<(n1-1);i++)
    {
        if(a[i]>a[i+1])
        {
            swap=a[i];
            a[i]=a[i+1];
            a[i+1]=swap;
        }
    }
    printf("Sorted 1st array becomes: ");
    for(i=0;i<n1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the number of elements in the 2nd array:");
    scanf("%d",&n2);
    printf("Enter the 2nd array:");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<(n2-1);i++)
    {
        if(b[i]>b[i+1])
        {
            swap=b[i];
            b[i]=b[i+1];
            b[i+1]=swap;
        }
    }
    printf("Sorted 2nd array becomes: ");
    for(i=0;i<n2;i++)
    {
        printf("%d ",b[i]);
    }
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    i=(n1);j=0;
    while(i<(n1+n2) && j<n2)
    {
        c[i]=b[j];
        i++;j++;
    }
    printf("\nMerged sorted array:");
    for(i=0;i<(n1+n2);i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}