/*Write a program to Remove duplicates from array. */
#include <stdio.h>
int main()
{
    int a[100],i,n,swap,j,count=0;
    printf("Enter the number of inputs:");
    scanf("%d",&n);
    printf("Enter the inputs:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=a[j+1];
                count++;
                break;
            }
        }
    }
    printf("Modified array with removed duplicates is:");
    for(i=1;i<=(n-count+1);i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}