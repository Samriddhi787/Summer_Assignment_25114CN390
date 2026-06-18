/*Write a program to Binary search. */
#include <stdio.h>
int main()
{
    int a[100],i,n,beg,mid,end,search,j,swap,min;
    printf("Enter the number of inputs:");
    scanf("%d",&n);
    printf("Enter the inputs:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        min=i;
        for(j=(i+1);j<=n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap=a[i];
            a[i]=a[min];
            a[min]=swap;
        }
    }
    printf("Sorted array:");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the element to be searched:");
    scanf("%d",&search);
    beg=1;end=n;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==search)
        {
            printf("The element was found at position %d",mid);
            break;
        }
        else if(search<a[mid])
        {
            end=mid-1;
        }
        else
        {
            beg=mid+1;
        }
    }
    if(beg>end)
    {
        printf("Element not present");
    }
    return 0;
}