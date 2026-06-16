/*Write a program to Find maximum frequency element. */
#include <stdio.h>
int main()
{
    int a[100],i,n,swap,j,count,maxcount=0,maxelement;
    printf("Enter the number of inputs:");
    scanf("%d",&n);
    printf("Enter the inputs:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        count=1;
        for(j=i+1;j<=n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count>maxcount)
        {
            maxcount=count;
            maxelement=a[i];
        }
    }
    printf("%d occurs maximum times that is %d times\n",maxelement,maxcount);
    return 0;
}