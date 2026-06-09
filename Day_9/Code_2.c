#include <stdio.h>
int main()
{
    int rows,i,j;
    printf("Enter the number you want the number triangle till:");
    scanf("%d",&rows);
    for(i=rows;i>=1;i--)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
    }
    return 0;
}