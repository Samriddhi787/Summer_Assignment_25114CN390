/*Write a program to Convert lowercase to uppercase. */
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i,len=0;
    printf("Enter the string:");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    for(i=0;s[i]!='\0';i++)
    {
        len++;
    }
    for(i=0;i<len;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }
    puts(s);
    return 0;
}