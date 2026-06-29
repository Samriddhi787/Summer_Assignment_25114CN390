/*Write a program to Create menu-driven string operations system.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s1[100], s2[100], temp[100];
    int i, len, count, choice;

    while(1)
    {
        printf("\nMENU DRIVEN STRING OPERATIONS\n");
        printf("(1) Enter String\n");
        printf("(2) Display String\n");
        printf("(3) Find Length\n");
        printf("(4) Copy String\n");
        printf("(5) Concatenate Strings\n");
        printf("(6) Compare Strings\n");
        printf("(7) Reverse String\n");
        printf("(8) Convert to Uppercase\n");
        printf("(9) Convert to Lowercase\n");
        printf("(10) Count Vowels\n");
        printf("(11) Count Consonants\n");
        printf("(12) Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        getchar();

        if(choice==1)//enter
        {
            printf("Enter the string: ");
            fgets(s1,sizeof(s1),stdin);
            s1[strcspn(s1,"\n")]='\0';
        }

        else if(choice==2)//display
        {
            printf("String: %s\n",s1);
        }

        else if(choice==3)//length
        {
            len=strlen(s1);
            printf("Length = %d\n",len);
        }

        else if(choice==4)//copy
        {
            strcpy(temp,s1);
            printf("Copied string: %s\n",temp);
        }

        else if(choice==5)//concatenate
        {
            printf("Enter another string: ");
            fgets(s2,sizeof(s2),stdin);
            s2[strcspn(s2,"\n")]='\0';

            strcpy(temp,s1);
            strcat(temp,s2);

            printf("Concatenated string: %s\n",temp);
        }

        else if(choice==6)//compare
        {
            printf("Enter another string: ");
            fgets(s2,sizeof(s2),stdin);
            s2[strcspn(s2,"\n")]='\0';

            if(strcmp(s1,s2)==0)
            {
                printf("Strings are equal.\n");
            }
            else
            {
                printf("Strings are not equal.\n");
            }
        }

        else if(choice==7)//reverse
        {
            strcpy(temp,s1);
            strrev(temp);

            printf("Reversed string: %s\n",temp);
        }

        else if(choice==8)//convert to uppercase
        {
            strcpy(temp,s1);

            for(i=0;temp[i]!='\0';i++)
            {
                temp[i]=toupper(temp[i]);
            }

            printf("Uppercase string: %s\n",temp);
        }

        else if(choice==9)//convert to lowercase
        {
            strcpy(temp,s1);

            for(i=0;temp[i]!='\0';i++)
            {
                temp[i]=tolower(temp[i]);
            }

            printf("Lowercase string: %s\n",temp);
        }

        else if(choice==10)//count vowels
        {
            count=0;

            for(i=0;s1[i]!='\0';i++)
            {
                if(tolower(s1[i])=='a' || tolower(s1[i])=='e' ||
                   tolower(s1[i])=='i' || tolower(s1[i])=='o' ||
                   tolower(s1[i])=='u')
                {
                    count++;
                }
            }

            printf("Number of vowels = %d\n",count);
        }

        else if(choice==11)//count consonants
        {
            count=0;

            for(i=0;s1[i]!='\0';i++)
            {
                if(isalpha(s1[i]))
                {
                    if(tolower(s1[i])!='a' && tolower(s1[i])!='e' &&
                       tolower(s1[i])!='i' && tolower(s1[i])!='o' &&
                       tolower(s1[i])!='u')
                    {
                        count++;
                    }
                }
            }

            printf("Number of consonants = %d\n",count);
        }

        else if(choice==12)//exit
        {
            printf("System closed.\n");
            break;
        }

        else
        {
            printf("Invalid input.\n");
        }
    }

    return 0;
}