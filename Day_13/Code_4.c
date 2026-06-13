#include <stdio.h>
int main()
{
    int a[40],i,n,even=0,odd=0;
    printf("Enter the number of inputs:");
    scanf("%d",&n);
    printf("Enter the inputs:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if((a[i])%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("The number of even elements in the array is:%d\n",even);
    printf("The number of odd elements in the array is:%d",odd);
    return 0;
}