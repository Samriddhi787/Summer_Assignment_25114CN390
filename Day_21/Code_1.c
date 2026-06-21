/*Write a program to Find string length without strlen(). */
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i,len=0;;
    printf("Enter the string:");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    for(i=0;s[i]!='\0';i++)
    {
        len++;
    }
    printf("Length of the string is:%d",len);
    return 0;
}