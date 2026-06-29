/*Write a program to Create menu-driven calculator. */
#include <stdio.h>
#include <math.h>
int main()
{
    float n1,n2,result;
    int n3,n4,mod_r;
    int choice;
    while(1)
    {
        printf("\nMENU DRIVEN CALCULATOR\n");
        printf("SELECT OPERATION:\n (1) Addition\n(2) Subtraction\n(3) Multiplication\n(4) Division\n(5) Modulus\n(6) Power\n(7) Exit\n Option number:");
        scanf("%d",&choice);


        if (choice==1 ||choice==2 ||choice==3 ||choice==4 ||choice==6)
        {
        printf("Enter 2 operands respectively:");
        scanf("%f%f",&n1,&n2);
        }
        if (choice==5)
        {
        printf("Enter 2 operands respectively:");
        scanf("%d%d",&n3,&n4);
        }


        if(choice==1)//addition
        {
            result=n1+n2;
            printf("%.2f + %.2f = %.2f\n",n1,n2,result);
        }
        else if(choice==2)//subtraction
        {
            result=n1-n2;
            printf("%.2f - %.2f = %.2f\n",n1,n2,result);
        }
        else if(choice==3)//multiplication
        {
            result=n1*n2;
            printf("%.2f * %.2f = %.2f\n",n1,n2,result);
        }
        else if(choice==4)//division
        {
            if(n2==0)
            {
                printf("Division by 0 is not possible.\n");
            }
            else
            {
                result=n1/n2;
                printf("%.2f / %.2f = %.2f\n", n1, n2, result);
            }
        }
        else if(choice==5)//modulus
        {
            if(n4==0)
            {
                printf("Modulus by 0 is not possible.\n");
            }
            else
            {
                mod_r = n3 % n4;
                printf("%d mod %d = %d\n", n3, n4, mod_r);
            }
        }
        else if(choice==6)//power
        {
            result=pow(n1,n2);
            printf("%.2f ^ %.2f = %.2f\n",n1,n2,result);
        }
        else if(choice==7)
        {
            printf("System closed.\n");
            break;
        }
        else
        {
            printf("Invalid input\n");
        }
    }
    return 0;
}