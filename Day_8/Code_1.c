#include <stdio.h>
int main()
{
    char c='*';
    int r,i,j;
    printf("Enter the number of rows in pyramid:");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("%c",c);
        }
    }
    return 0;
}