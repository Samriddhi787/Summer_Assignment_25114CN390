/*Write a program to Remove spaces from string.  */
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
    for (i = 0; i < len; i++)
    {
        if(s[i]==' ')
        {
            for(j=0;j<len;j++)
            {
                s[j]=s[j+1];
            }
        }
        printf("%c",s[i]);
    }
    return 0;
}