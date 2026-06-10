#include <stdio.h>
int main()
{
    int r,i,j,k,l;
    printf("Enter the number of rows in pyramid:");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        printf("\n");
        for(j=0;j<=(r-i);j++)
        {
            printf(" ");      
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        for(l=(i-1);l>=1;l--)
        {
            printf("%d",l);
        }
    }
    return 0;
}