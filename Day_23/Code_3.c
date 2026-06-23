/*Write a program to Check anagram strings. */
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], q[100];
    int i,j,len1=0,len2=0,count1=0,count2=0,flag=1;
    printf("Enter the 1st string:");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    for(i=0;s[i]!='\0';i++)
    {
        len1++;
    }
    printf("Enter the 2nd string:");
    fgets(q,sizeof(q),stdin);
    q[strcspn(q,"\n")]='\0';
    for(i=0;q[i]!='\0';i++)
    {
        len2++;
    }
    if(len1!=len2)
    {
        printf("The entered strings are not anagrams");
    }
    else
    {
        for (i = 0; i < len1; i++)
        {
            int repeat = 0;

            for (j = 0; j < i; j++)
            {
                if (s[i] == s[j])
                {
                    repeat = 1;
                    break;
                }
            }

            if (repeat == 0)
            {
                count1 = 0;
                count2 = 0;

                for (j = 0; j < len1; j++)
                {
                    if (s[i] == s[j])
                        count1++;
                }

                for (j = 0; j < len2; j++)
                {
                    if (s[i] == q[j])
                        count2++;
                }

                if (count1 != count2)
                {
                    flag = 0;
                    break;
                }
            }
        }

        if (flag == 1)
            printf("The strings are anagrams.");
        else
            printf("The strings are not anagrams.");

        return 0;
    }
}