#include <stdio.h>
int main()
{
    char c='*';
    int r,i,j,k;
    printf("Enter the number of rows in pyramid:");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        printf("\n");
        for(j=0;j<=(r-i);j++)
        {
            printf(" ");     

        }
        for(k=0;k<(2*i-1);k++)
            {
                printf("%c",c);
            }
    }
    return 0;
}