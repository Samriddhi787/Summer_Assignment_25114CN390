/*Write a program to Create contact management system. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct contact
{
    char name[50];
    char phone_num[50];
    char email[50];
}s[1000];
int main()
{
    int i,j,n,choice,num,flag=0,total=0,found,id;
    char search[50];
    printf("Contact management System\n");
    while(1)
    {
        printf("SELECT:\n(1) Create contact\n(2) Display contact\n(3) Search contact\n(4) Update contact\n(5)Delete contact\n(6) Exit\nOption Number:");
        scanf("%d", &choice);
        if (choice == 1) //create
        {
            flag = 1;
            printf("\nEnter the number of contacts:");
            scanf("%d", &n);
            getchar();
            if(total + n > 1000)
            {
                printf("Cannot add more than 1000 contacts.\n");
                continue;
            }
            num = total+1;
            for (i = total; i < total+n; i++)
            {
                printf("Contact %d\n", num);
                num++;
                printf("Enter the name:");
                fgets(s[i].name, sizeof(s[i].name), stdin);
                s[i].name[strcspn(s[i].name, "\n")] = '\0';
                printf("Enter the phone number:");
                fgets(s[i].phone_num, sizeof(s[i].phone_num), stdin);
                s[i].phone_num[strcspn(s[i].phone_num, "\n")] = '\0';
                printf("Enter the email:");
                fgets(s[i].email, sizeof(s[i].email), stdin);
                s[i].email[strcspn(s[i].email, "\n")] = '\0';
            }
            total=total+n;
        }
        else if (choice == 2)//display
        {
            if(flag == 0)
            {
                printf("No contacts available\n");
            }
            else
            {
                num = 1;
                for (i = 0; i < total; i++)
                {
                    printf("\nContact %d\n", num);
                    num++;
                    printf("Name:");
                    puts(s[i].name);
                    printf("Phone number:");
                    puts(s[i].phone_num);
                    printf("Email:");
                    puts(s[i].email);
                }
            }
        }
        else if (choice == 3)//search
        {
            if(flag==0)
            {
                printf("No contact available\n");
            }
            else
            {
                getchar();
                printf("Enter the Name of the contact to be searched:");
                fgets(search, sizeof(search), stdin);
                search[strcspn(search, "\n")] = '\0';
                found=0;
                for (i = 0; i < total; i++)
                {
                    if (strcmp(search, s[i].name)==0)
                    {
                        printf("Name:");
                        puts(s[i].name);
                        printf("Phone number:");
                        puts(s[i].phone_num);
                        printf("Email:");
                        puts(s[i].email);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Contact not found\n");
                }
            }
            
        }
        else if(choice==4)//update
        {
            if(flag==0)
            {
                printf("No contact available\n");
            }
            else
            {
                getchar();
                printf("Enter the Name of the contact to be updated:");
                fgets(search, sizeof(search), stdin);
                search[strcspn(search, "\n")] = '\0';
                found=0;
                for (i = 0; i < total; i++)
                {
                    if (strcmp(search, s[i].name)==0)
                    {
                        printf("Enter the updated name:");
                        fgets(s[i].name, sizeof(s[i].name), stdin);
                        s[i].name[strcspn(s[i].name, "\n")] = '\0';
                        printf("Enter the updated phone number:");
                        fgets(s[i].phone_num, sizeof(s[i].phone_num), stdin);
                        s[i].phone_num[strcspn(s[i].phone_num, "\n")] = '\0';
                        printf("Enter the updated email:");
                        fgets(s[i].email, sizeof(s[i].email), stdin);
                        s[i].email[strcspn(s[i].email, "\n")] = '\0';
                        printf("Contact updated successfully.\n");
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Contact not found\n");
                }
            }
        }
        else if(choice==5)//delete
        {
            if(flag==0)
            {
                printf("No contact available\n");
            }
            else
            {
                getchar();
                printf("Enter the Name of the contact to be deleted:");
                fgets(search, sizeof(search), stdin);
                search[strcspn(search, "\n")] = '\0';
                found=0;
                for (i = 0; i < total; i++)
                {
                    if (strcmp(search, s[i].name)==0)
                    {
                        for(j=i;j<total-1;j++)
                        {
                            s[j]=s[j+1];
                        }
                        total--;
                        if(total == 0)
                        {
                            flag = 0;
                        }
                        printf("Contact deleted successfully.\n");
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Contact not found\n");
                }
            }
        }
        else if(choice==6)//exit
        {
            printf("System closed\n");
            break;
        }
        else
        {
            printf("Enter valid option\n");
        }
    }
    return 0;
}