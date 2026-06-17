/*Write a program to Intersection of arrays. */
#include <stdio.h>
int main()
{
    int a[100],b[100],i,j,n,num,k,size;
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
    printf("Intersection of array is:");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=num;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d ",a[i]);
                break;
            }
        }
    }
    return 0;
}