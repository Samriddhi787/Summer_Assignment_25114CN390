#include <stdio.h>
int main()
{
    int n,i,d;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("Factors:");
    for(i=1;i<=n;i++)
    {
        d=n%i;
        if(d==0)
        {
            printf("%d ",i);
        }
        else
        {
            continue;
        }
    }
    return 0;
}