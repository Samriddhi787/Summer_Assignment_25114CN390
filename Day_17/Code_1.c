/*Write a program to Merge arrays. */
#include <stdio.h>
int main()
{
    int a[100],b[100],c[100],i,j,n,num;
    printf("Enter the number of inputs of 1st array:");
    scanf("%d",&n);
    printf("Enter the inputs of 1st array:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number of inputs of 2nd array:");
    scanf("%d",&num);
    printf("Enter the inputs of 2nd array:");
    for(j=1;j<=num;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=1;i<=n;i++)
    {
        c[i]=a[i];
    }
    i=(n+1);j=1;
    while(i<=(n+num) && j<=num)
    {
        c[i]=b[j];
        i++;j++;
    }
    printf("Merged array:");
    for(i=1;i<=(n+num);i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}