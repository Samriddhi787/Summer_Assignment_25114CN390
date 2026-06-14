/*Write a program to Find duplicates in array. */
#include <stdio.h>
int main()
{
    int a[100],i,n,j;
    printf("Enter the number of inputs:");
    scanf("%d",&n);
    printf("Enter the inputs:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Duplicated elements are:\n");
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d ",a[i]);
                break;
            }
        }
    }
    return 0;
}