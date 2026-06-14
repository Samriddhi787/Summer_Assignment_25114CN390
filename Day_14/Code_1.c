/*Write a program to Linear search. */
#include <stdio.h>
int main()
{
    int a[100],i,n,item,flag=0;
    printf("Enter the number of inputs:");
    scanf("%d",&n);
    printf("Enter the inputs:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the item to be searched:");
    scanf("%d",&item);
    for(i=1;i<=n;i++)
    {
        if(item==a[i])
        {
            flag=1;
        }
        if(flag==1)
        {
            printf("The item %d is present at position %d", item, i);
            break;
        }
    }
    if(flag==0)
    {
        printf("The item is not present in the given inputs of array");
    }
    return 0;
}