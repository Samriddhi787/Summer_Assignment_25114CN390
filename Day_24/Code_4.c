/*Write a program to Remove duplicate characters.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i,j,len=0;
    printf("Enter the string:");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    for(i=0;s[i]!='\0';i++)
    {
        len++;
    }
    printf("The string after removing the repeated characters becomes ");
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (s[i] == s[j] && i!=j)
            {
                s[j] = s[j + 1];
            }
        }
        printf("%c", s[i]);
    }
    return 0;
}