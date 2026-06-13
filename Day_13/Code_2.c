#include <stdio.h>
int main()
{
    int a[40],i,n,sum=0,avg;
    printf("Enter the number of inputs:");
    scanf("%d",&n);
    printf("Enter the inputs:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("The sum of the entered array:%d\n",sum);
    printf("The average of the entered array:%d",avg);
    return 0;
}