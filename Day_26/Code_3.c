/*Write a program to Create ATM simulation. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int i,cpin=4567, pin, cbalance=10000,comp1,comp2,comp3, amount;
    char t[50],a[50],w[50]="withdraw",d[50]="deposit",c[50]="check balance";
    printf("Enter your PIN:");
    scanf("%d",&pin);
    getchar();
    if(cpin!=pin)
    {
        printf("Invalid PIN");
    }
    else
    {
        printf("Enter account type(Savings/Current): ");
        fgets(a,sizeof(a),stdin);
        a[strcspn(a,"\n")]='\0';
        printf("Enter transaction type(Withdraw/deposit/Check Balance): ");
        fgets(t,sizeof(t),stdin);
        t[strcspn(t,"\n")]='\0';
        for(i = 0; t[i] != '\0'; i++)
        {
            t[i] = tolower(t[i]);
        }
        comp1=strcmp(t,w);
        comp2=strcmp(t,d);
        comp3=strcmp(t,c);
        if(comp1==0 && comp2!=0 && comp3!=0)
        {
            printf("Enter the amount to withdraw:");
            scanf("%d",&amount);
            if(amount>cbalance)
            {
                printf("Insufficient balance");
            }
            else
            {
                printf("Collect Money\n");
                cbalance = cbalance - amount;
                printf("Updated balance:%d", cbalance);
            }
        }
        else if(comp1!=0 && comp2==0 && comp3!=0)
        {
            printf("Enter the amount to deposit:");
            scanf("%d",&amount);
            printf("Enter Money\n");
            cbalance=cbalance+amount;
            printf("Updated balance:%d",cbalance);
        }
        else if(comp1!=0 && comp2!=0 && comp3==0)
        {
            printf("Available balance:%d",cbalance);
        }
        else
        {
            printf("Invalid transaction type");
        }
    }
    return 0;
}