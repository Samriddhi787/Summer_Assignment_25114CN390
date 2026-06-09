#include <stdio.h>
int main()
{
    char c='*';
    int r,i,j;
    printf("Enter the number of rows in pyramid:");
    scanf("%d",&r);
    for(i=r;i>=1;i--)
    {
        printf("\n");
        for(j=i;j>=1;j--)
        {
            printf("%c",c);
        }
    }
    return 0;
}