/*Write a program to Second largest element. */
#include <stdio.h>
int main()
{
    int a[100],i,n,largest,slargest;
    printf("Enter the number of inputs:");
    scanf("%d",&n);
    printf("Enter the inputs:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[1];
    for(i=1;i<=n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    slargest=a[1];
    for(i=1;i<=n;i++)
    {
        if(a[i]>slargest && a[i]!=largest)
        {
            slargest=a[i];
        }
    }
    printf("The second largest element of the array is:%d",slargest);
    return 0;
}