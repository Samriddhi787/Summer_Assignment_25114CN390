/*Write a program to Find common characters in strings. */
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100],s2[100];
    int i,j,k,len1,len2;
    printf("Enter the 1st string:");
    fgets(s1,sizeof(s1),stdin);
    s1[strcspn(s1,"\n")]='\0';
    len1=strlen(s1);

    printf("Enter the 2nd string:");
    fgets(s2,sizeof(s2),stdin);
    s2[strcspn(s2,"\n")]='\0';
    len2=strlen(s2);

    printf("Common characters are:");
    for(i=0;i<len1;i++)
    {
        int duplicate=0;
        for(k=0;k<i;k++)
        {
            if(s1[i]==s1[k])
            {
                duplicate=1;
                break;
            }
        }
        if(duplicate==0)
        {
            for(j=0;j<len2;j++)
            {
                if(s1[i]==s2[j])
                {
                    printf("%c ",s2[j]);
                    break;
                }
            }
        }
    }
    return 0;
}