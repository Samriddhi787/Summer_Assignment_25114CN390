/*Write a program to Find first non-repeating character. */
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i,len=0,j,k;
    printf("Enter the string:");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    for(i=0;s[i]!='\0';i++)
    {
        len++;
    }
    for(i=0;i<len;i++)
    {
        int flag=1;
        for(k=0;k<i;k++)
        {
            if(s[i]==s[k])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            for(j=0;j<len;j++)
            {
                if(i!=j && s[i]==s[j])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                printf("The 1st non repeating character is %c\n",s[i]);
                break;
            }
            else
            {
                printf("All the characters are being repeated");
            }
        }
    }
    return 0;
}