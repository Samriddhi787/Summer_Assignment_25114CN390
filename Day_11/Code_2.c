#include <stdio.h>
int max(int *array,int j,int num)
{
    int maximum=array[0];
    for(j=0;j<num;j++)
    {
        if(maximum <array[j])
        {
            maximum=array[j];
        }
    }
    return maximum;
}
int main()
{
    int a[10],i,n;
    printf("Enter the number of inputs:");
    scanf("%d",&n);
    if(n>10)
    {
        printf("Inputs can't be more than 10");
    }
    else
    {
        printf("Enter the numbers:");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("The Largest element is:%d", max(a, i, n));
    }
    return 0;
}