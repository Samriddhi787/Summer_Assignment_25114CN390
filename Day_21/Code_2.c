/*Write a program to Reverse a string. */
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], r[100];
    int len=0,i;
    printf("Enter the string to be reversed:");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    for(i=0;s[i]!='\0';i++)
    {
        len++;
    }
    for(i=len;i>=0;i--)
    {
        printf("%c",s[i]);
    }
    return 0;
}