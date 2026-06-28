/*Write a program to Create bank account system.  */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct account
{
    char name[50];
    int account_no;
    int balance;
}s[10];
int main()
{
    int i,j,n,choice,search,num,flag=0,total=0,found,id,d,w;
    printf("Bank account System\n");
    while(1)
    {
        printf("SELECT:\n(1) Create account\n(2) Display account details\n(3) Withdraw\n(4)Search account\n(5)Deposit\n(6)Delete account\n(7) Exit\nOption Number:");
        scanf("%d", &choice);
        if (choice == 1)
        {
            flag = 1;
            printf("\nEnter the number of accounts:");
            scanf("%d", &n);
            getchar();
            if(total + n > 10)
            {
                printf("Cannot add more than 10 accounts.\n");
                continue;
            }
            num = total+1;
            for (i = total; i < total+n; i++)
            {
                printf("Account %d\n", num);
                num++;
                printf("Enter the name:");
                fgets(s[i].name, sizeof(s[i].name), stdin);
                s[i].name[strcspn(s[i].name, "\n")] = '\0';
                printf("Enter the account number:");
                scanf("%d", &s[i].account_no);
                printf("Enter the Balance:");
                scanf("%d", &s[i].balance);
                getchar();
            }
            total=total+n;
        }
        else if (choice == 2)
        {
            if(flag == 0)
            {
                printf("No accounts in the bank\n");
            }
            else
            {
                num = 1;
                for (i = 0; i < total; i++)
                {
                    printf("\nAccount %d\n", num);
                    num++;
                    printf("Name:");
                    puts(s[i].name);
                    printf("Account number:%d\n", s[i].account_no);
                    printf("Balance:%d\n", s[i].balance);
                }
            }
        }
        else if (choice == 3)
        {
            if(flag==0)
            {
                printf("No account in the bank\n");
            }
            else
            {
                printf("Enter the account number of the account to withdraw from:");
                scanf("%d", &id);
                found=0;
                for (i = 0; i < total; i++)
                {
                    if (id == s[i].account_no)
                    {
                        found=1;
                        printf("Enter the withdrawal amount: ");
                        scanf("%d",&w);
                        getchar();
                        if(s[i].balance>=w)
                        {
                            s[i].balance=s[i].balance-w;
                            printf("Balance updated successfully.\n");
                        }
                        else
                        {
                            printf("Insufficient balance\n");
                        }
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Account not found\n");
                }
            }
        }
        else if(choice==4)
        {
            if(flag==0)
            {
                printf("No accounts in the bank\n");
            }
            else
            {
                printf("Enter the account number of the account to be searched:");
                scanf("%d", &search);
                found=0;
                for (i = 0; i < total; i++)
                {
                    if (search == s[i].account_no)
                    {
                        printf("Name:");
                        puts(s[i].name);
                        printf("Account number:%d\n", s[i].account_no);
                        printf("Balance:%d \n", s[i].balance);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Account not found\n");
                }
            }
            
        }
        else if(choice==5)
        {
            if(flag==0)
            {
                printf("No account in the bank\n");
            }
            else
            {
                printf("Enter the account number of the account to deposit to:");
                scanf("%d", &id);
                found=0;
                for (i = 0; i < total; i++)
                {
                    if (id == s[i].account_no)
                    {
                        found=1;
                        printf("Enter the amount to be deposited:");
                        scanf("%d",&d);
                        getchar();
                        s[i].balance=s[i].balance+d;
                        printf("Balance updated successfully.\n");
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Account not found\n");
                }
            }
        }
        else if(choice==6)
        {
            if(flag==0)
            {
                printf("No account in the bank\n");
            }
            else
            {
                printf("Enter the account number of the account to be deleted:");
                scanf("%d", &search);
                found=0;
                for (i = 0; i < total; i++)
                {
                    if (search == s[i].account_no)
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
                        printf("Account deleted successfully.\n");
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Account not found\n");
                }
            }
        }
        else if(choice==7)
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