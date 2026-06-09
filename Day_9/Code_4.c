#include <stdio.h>
int main()
{
    char c='*';
    int s,i,j;
    printf("Enter the number of stars in side of a square:");
    scanf("%d",&s);
    for(i=1;i<=s;i++)
    {
        printf("\n");
        for(j=1;j<=s;j++)
        {
            if(i==1||i==s||j==1||j==s)
            {
                printf("%c",c);
            }
            else
            {
                printf(" ");
            }
        }
    }
    return 0;
}