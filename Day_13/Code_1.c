#include <stdio.h>
int main()
{
    int a[40],i,n;
    printf("Enter the number of inputs:");
    scanf("%d",&n);
    printf("Enter the inputs:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The entered array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}