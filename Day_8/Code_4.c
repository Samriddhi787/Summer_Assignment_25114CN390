#include <stdio.h>
int main()
{
    int rows,i,j;
    printf("Enter the number you want the number triangle till:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
    }
    return 0;
}