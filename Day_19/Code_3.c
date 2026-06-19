/*Write a program to Transpose matrix. */
#include <stdio.h>
int main()
{
    int a[100][100],i,r1,c1,j,b[100][100];
    printf("Enter the rows and columns of the matrix:");
    scanf("%d%d",&r1,&c1);
    printf("Enter the inputs of the matrix:");
    for (i = 1; i <= r1; i++)
    {
        for (j = 1; j <= c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Entered matrix:\n");
    for (i = 1; i <= r1; i++)
    {
        for (j = 1; j <= c1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (i = 1; i <= r1; i++)
    {
        for (j = 1; j <= c1; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    printf("Transpose of the matrices is:\n");
    for (i = 1; i <= r1; i++)
    {
        for (j = 1; j <= c1; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}