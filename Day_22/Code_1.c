/*Write a program to Check palindrome string.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], r[100];
    int i,len=0,j,flag=1;
    printf("Enter the string:");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    for(i=0;s[i]!='\0';i++)
    {
        len++;
    }
    i=0;j=len-1;
    while (i<len && j>=0)
    {
        r[i]=s[j];
        i++;j--;
    }
    r[i] = '\0';
    for(i=0;i<len;i++)
    {
        if(r[i]!=s[i])
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("The string is palindrome");
    }
    else
    {
        printf("The string is not palindrome");
    }
    return 0;
}