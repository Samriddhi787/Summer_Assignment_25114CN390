/*Write a program to Reverse array. */
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
    i=1;j=n;
    while(i<j)
    {   
        swap = a[i];
        a[i] = a[j];
        a[j] = swap;
        i++;
        j--;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}