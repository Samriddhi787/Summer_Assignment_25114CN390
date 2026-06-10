#include <stdio.h>
int main()
{ 
    char alph,i,k,l;
    int j;
    printf("Enter the alphabet you want the character triangle till:");
    scanf("%c",&alph);
    if(alph<='Z' && alph>='A')
    {
        for (i ='A'; i <= alph; i++)
        {
            printf("\n");
            for (j = 1; j <= (alph - i); j++)
            {
                printf(" ");
            }
            for (k = 'A'; k <= i; k++)
            {
                printf("%c", k);
            }
            for (l = (i-1); l >= 'A'; l--)
            {
                printf("%c", l);
            }
        }
    }
    else if(alph<='z' && alph>='a')
    {
        printf("Enter input alphabet in capital");
    }
    else
    {
        printf("Enter valid alphabet input");
    }
    return 0;
}