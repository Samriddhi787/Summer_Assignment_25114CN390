/*Write a program to Find diagonal sum.  */
#include <stdio.h>
int main()
{
    int a[100][100],i,dim,j,lsum=0,rsum=0;
    printf("Enter the dimensions of the square matrix:");
    scanf("%d",&dim);
    printf("Enter the inputs of the matrix:");
    for (i = 1; i <= dim; i++)
    {
        for (j = 1; j <= dim; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Entered matrix:\n");
    for (i = 1; i <= dim; i++)
    {
        for (j = 1; j <= dim; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (i = 1; i <= dim; i++)
    {
        for (j = 1; j <= dim; j++)
        {
            if(i==j)
            {
                lsum=lsum+a[i][j];
            }
        }
    }
    for (i = 1; i <= dim; i++)
    {
        for (j = 1; j <= dim; j++)
        {
            if(i==dim-j+1)
            {
                rsum=rsum+a[i][j];
            }
        }
    }
    printf("Sum of the elements of the left diagonal of the matrices is:%d\n",lsum);
    printf("Sum of the elements of the right diagonal of the matrices is:%d",rsum);
    return 0;
}