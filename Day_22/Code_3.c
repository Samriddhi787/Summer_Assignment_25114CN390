/*Write a program to Character frequency.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i,len=0,j,k,count;
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
            count=0;
            for(j=0;j<len;j++)
            {
                if(s[i]==s[j])
                {
                    count++;
                }
            }
            printf("The number of times '%c' has appeared is %d\n",s[i],count);
        }
    }
    return 0;
}