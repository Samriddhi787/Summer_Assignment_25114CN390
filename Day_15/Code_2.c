/*Write a program to Rotate array left. */
#include <stdio.h>
int main()
{
    int a[100],i,n,swap;
    printf("Enter the number of inputs:");
    scanf("%d",&n);
    printf("Enter the inputs:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Modified array is:");
    for(i=1;i<=n;i++)
    {
        swap=a[i];
        a[i]=a[i+1];
        a[i+1]=swap;
        printf("%d ", a[i]);
    }
    return 0;
}