#include <stdio.h>
int main()
{ 
    char alph,i,j;
    printf("Enter the alphabet you want the character triangle till:");
    scanf("%c",&alph);
    if(alph<'Z' && alph>'A')
    {
        for (i ='A'; i <= alph; i++)
        {
            printf("\n");
            for (j = 'A'; j <= i; j++)
            {
                printf("%c", i);
            }
        }
    }
    else if(alph<'z' && alph>'a')
    {
        printf("Enter input alphabet in capital");
    }
    else
    {
        printf("Enter valid alphabet input");
    }
    return 0;
}