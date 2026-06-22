/*Write a program to Count words in a sentence.  */
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i,len=0,count=0;
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
            count++;
            continue;
        }
    }
    printf("The number of words in this sentence is %d",count+1);
    return 0;
}