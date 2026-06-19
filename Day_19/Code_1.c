/*Write a program to Add matrices. */
#include <stdio.h>
int main()
{
    int a[100][100],i,r1,r2,c1,c2,j,b[100][100],c[100][100];
    printf("Enter the rows and columns of the 1st matrix:");
    scanf("%d%d",&r1,&c1);
    printf("Enter the rows and columns of the 2nd matrix:");
    scanf("%d%d",&r2,&c2);
    if(r1!=r2 && c1!=c2)
    {
        printf("Enter matrices of the same dimensions for addition");
    }
    else
    {
        printf("Enter the inputs of the 1st matrix:");
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
        printf("Enter the inputs of the 2nd matrix:");
        for (i = 1; i <= r2; i++)
        {
            for (j = 1; j <= c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("Entered matrix:\n");
        for (i = 1; i <= r2; i++)
        {
            for (j = 1; j <= c2; j++)
            {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }
        for(i=1;i<=r2;i++)
        {
            for(j=1;j<=c2;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("Addition of both the matrices is:\n");
        for(i=1;i<=r2;i++)
        {
            for (j = 1; j <= c2; j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}