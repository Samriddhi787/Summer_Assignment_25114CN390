/*Write a program to Create ticket booking system.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct ticket
{
    char name[50];
    int date;
    char des[50];
    int price;
    int ticket_num;
    int seat_num;
}s[100];
int main()
{
    int i,j,n,choice,search,num,flag=0,total=0,found,id;
    printf("Ticket booking System\n");
    while(1)
    {
        printf("SELECT:\n(1) Create Ticket\n(2) Display Ticket\n(3) Cancel Ticket \n(4)Search ticket\n(5) Update ticket\n(6)Delete ticket\n(7) Exit\nOption Number:");
        scanf("%d", &choice);
        if (choice == 1) //create
        {
            flag = 1;
            printf("\nEnter the number of Tickets:");
            scanf("%d", &n);
            getchar();
            if(total + n > 100)
            {
                printf("Cannot add more than 100 tickets.\n");
                continue;
            }
            num = total+1;
            for (i = total; i < total+n; i++)
            {
                printf("Ticket %d\n", num);
                num++;
                printf("Enter the name:");
                fgets(s[i].name, sizeof(s[i].name), stdin);
                s[i].name[strcspn(s[i].name, "\n")] = '\0';
                printf("Enter the date:");
                scanf("%d", &s[i].date);
                getchar();
                printf("Enter the destination:");
                fgets(s[i].des, sizeof(s[i].des), stdin);
                s[i].des[strcspn(s[i].des, "\n")] = '\0';
                printf("Enter the price:");
                scanf("%d", &s[i].price);
                printf("Enter the ticket number:");
                scanf("%d", &s[i].ticket_num);
                printf("Enter the seat number:");
                scanf("%d", &s[i].seat_num);
                getchar();
            }
            total=total+n;
        }
        else if (choice == 2)//display
        {
            if(flag == 0)
            {
                printf("No ticket available\n");
            }
            else
            {
                num = 1;
                for (i = 0; i < total; i++)
                {
                    printf("\nTicket %d\n", num);
                    num++;
                    printf("Name:");
                    puts(s[i].name);
                    printf("Date:%d\n", s[i].date);
                    printf("Destination:");
                    puts(s[i].des);
                    printf("Price:%d\n", s[i].price);
                    printf("Ticket number:%d\n", s[i].ticket_num);
                    printf("Seat number:%d\n", s[i].seat_num);
                }
            }
        }
        else if (choice == 3)//cancel
        {
            if(flag==0)
            {
                printf("No ticket available\n");
            }
            else
            {
                printf("Enter the ticket number of the ticket to be Cancelled:");
                scanf("%d", &search);
                found=0;
                for (i = 0; i < total; i++)
                {
                    if (search == s[i].ticket_num)
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
                        printf("Ticket cancelled successfully.\n");
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Ticket not found\n");
                }
            }
        }
        else if(choice==4)//search
        {
            if(flag==0)
            {
                printf("No ticket available\n");
            }
            else
            {
                printf("Enter the ticket number of the ticket to be searched:");
                scanf("%d", &search);
                found=0;
                for (i = 0; i < total; i++)
                {
                    if (search == s[i].ticket_num)
                    {
                        printf("Name:");
                        puts(s[i].name);
                        printf("Date:%d\n", s[i].date);
                        printf("Destination:");
                        puts(s[i].des);
                        printf("Price:%d\n", s[i].price);
                        printf("Ticket number:%d\n", s[i].ticket_num);
                        printf("Seat number:%d\n", s[i].seat_num);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Ticket not found\n");
                }
            }
            
        }
        else if(choice==5)//update
        {
            if(flag==0)
            {
                printf("No ticket available\n");
            }
            else
            {
                printf("Enter the ticket number of the ticket to be updated:");
                scanf("%d", &id);
                getchar();
                found=0;
                for (i = 0; i < total; i++)
                {
                    if (id == s[i].ticket_num)
                    {
                        found=1;
                        printf("Enter updated name:");
                        fgets(s[i].name, sizeof(s[i].name), stdin);
                        s[i].name[strcspn(s[i].name, "\n")] = '\0';
                        printf("Enter updated date:");
                        scanf("%d", &s[i].date);
                        getchar();
                        printf("Enter updated destination:");
                        fgets(s[i].des, sizeof(s[i].des), stdin);
                        s[i].des[strcspn(s[i].des, "\n")] = '\0';
                        printf("Enter updated price:");
                        scanf("%d", &s[i].price);
                        printf("Enter updated ticket number:");
                        scanf("%d", &s[i].ticket_num);
                        printf("Enter updated seat number:");
                        scanf("%d", &s[i].seat_num);
                        printf("Ticket updated successfully.\n");
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Ticket not found\n");
                }
            }
        }
        else if(choice==6)//delete
        {
            if(flag==0)
            {
                printf("No ticket available\n");
            }
            else
            {
                printf("Enter the ticket number of the ticket to be deleted:");
                scanf("%d", &search);
                found=0;
                for (i = 0; i < total; i++)
                {
                    if (search == s[i].ticket_num)
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
                        printf("Ticket deleted successfully.\n");
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Ticket not found\n");
                }
            }
        }
        else if(choice==7)//exit
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