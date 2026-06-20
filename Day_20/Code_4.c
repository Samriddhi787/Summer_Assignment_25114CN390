/*Write a program to Find column-wise sum*/
#include <stdio.h>
int main()
{
    int a[100][100],i,r,c,j;
    printf("Enter the rows and columns of the matrix:");
    scanf("%d%d",&r,&c);
    printf("Enter the inputs of the matrix:");
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Entered matrix:\n");
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (j = 1; j <= c; j++)
    {
        int csum=0;
        for (i = 1; i <= r; i++)
        {
            csum=csum+a[i][j];
        }
        printf("Sum of the elements of row %d of the matrices is:%d\n",i,csum);
    }
    return 0;
}