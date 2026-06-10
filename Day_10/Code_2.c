#include <stdio.h>
int main()
{
    char c='*';
    int r,i,j,k;
    printf("Enter the number of rows in pyramid:");
    scanf("%d",&r);
    for(i=r;i>=1;i--)
    {
        printf("\n");
        for(j=(r-i);j>=0;j--)
        {
            printf(" ");     

        }
        for(k=(2*i-1);k>0;k--)
            {
                printf("%c",c);
            }
    }
    return 0;
}