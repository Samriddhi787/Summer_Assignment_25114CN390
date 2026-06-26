/*Write a program to Create voting eligibility system.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int age,i, valid=18, comp;
    char nationality[50],validity[50]="indian";
    char id;
    printf("Enter your age:");
    scanf("%d",&age);
    getchar();
    if(age<valid)
    {
        printf("Not eligible");
    }
    else
    {
        printf("Enter your nationality:");
        fgets(nationality, sizeof(nationality), stdin);
        nationality[strcspn(nationality, "\n")] = '\0';
        for(i = 0; nationality[i] != '\0'; i++)
        {
            nationality[i] = tolower(nationality[i]);
        }
        comp = strcmp(nationality, validity);
        if (comp != 0)
        {
            printf("Not eligible");
        }
        else
        {
            printf("Do you have voter ID card(Y/N)?: ");
            id=getchar();
            if (id == 'Y' || id=='y')
            {
                printf("Eligible");
            }
            else
            {
                printf("Not eligible");
            }
        }
    }
    return 0;
}