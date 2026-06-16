/*Write a program to Find pair with given sum.*/
#include <stdio.h>
int main()
{
    int a[100],i,j,n,swap,sum;
    printf("Enter the number of inputs:");
    scanf("%d",&n);
    printf("Enter the inputs:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the target sum:");
    scanf("%d",&sum);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i]+a[j]==sum)
            {
                printf("(%d,%d)",a[i],a[j]);
                break;
            }
        }
    }
    
    return 0;
}