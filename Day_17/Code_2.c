/*Write a program to Union of arrays. */
#include <stdio.h>
int main()
{
    int a[100],b[100],c[100],i,j,n,num,k,size;
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
    size=(n+num);
    i=(n+1);j=1;
    while(i<=size && j<=num)
    {
        c[i]=b[j];
        i++;j++;
    }
    for(i=1;i<=size;i++)
    {
        for(j=i+1;j<=size;j++)
        {
            if(c[i]==c[j])
            {
                for(k=j;k<size;k++)
                {
                    c[k]=c[k+1];
                }
                size--;
                j--;
            }
        }
    }
    printf("Union of array is:");
    for(i=1;i<=size;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}