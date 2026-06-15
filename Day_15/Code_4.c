/*Write a program to Move zeroes to end. */
#include <stdio.h>
int main()
{
    int a[100],i,j,n,swap;
    printf("Enter the number of inputs:");
    scanf("%d",&n);
    printf("Enter the inputs:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if (a[i] == 0)
        {
            for(j=i+1;j<=n;j++)
            {
                if(a[j]!=0)
                {
                    swap = a[i];
                    a[i] = a[j];
                    a[j] = swap;
                    break;
                }
            }
        }
    }
    printf("Modified array is:");
    for(i=1;i<=n;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}