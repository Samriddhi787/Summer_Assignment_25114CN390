/*Write a program to Frequency of an element. */
#include <stdio.h>
int main()
{
    int a[100],i,n,item,count=0;
    printf("Enter the number of inputs:");
    scanf("%d",&n);
    printf("Enter the inputs:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the item you want frequency of:");
    scanf("%d",&item);
    for(i=1;i<=n;i++)
    {
        if(item==a[i])
        {
            count++;
        }
    }
    printf("%d is present %d times in the array",item,count);
    return 0;
}