/*Write a program to Check symmetric matrix.*/
#include <stdio.h>
int main()
{
    int a[100][100],i,r1,c1,j,b[100][100],flag=1;
    printf("Enter the rows and columns of the matrix:");
    scanf("%d%d",&r1,&c1);
    if(r1!=c1)
    {
        printf("The matrix should be square to be symmetric");
    }
    else
    {
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
        for (i = 1; i <= r1; i++)
        {
            for (j = 1; j <= c1; j++)
            {
                if (b[i][j]!= a[i][j])
                {
                    flag = 0;
                }
            }
        }
        if (flag == 1)
        {
            printf("The matrix is symmetric");
        }
        else
        {
            printf("The matrix is not symmetric");
        }
    }
    return 0;
}