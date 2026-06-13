#include <stdio.h>
int main()
{
    int a[40],i,n,smallest,largest;
    printf("Enter the number of inputs:");
    scanf("%d",&n);
    printf("Enter the inputs:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for(i=0;i<n;i++)
    {
        if(largest <a[i])
        {
            largest=a[i];
        }
    }
    smallest=a[0];
    for(i=0;i<n;i++)
    {
        if(smallest>a[i])
        {
            smallest=a[i];
        }
    }
    printf("The largest element in the array is:%d\n",largest);
    printf("The smallest element in the array is:%d",smallest);
    return 0;
}