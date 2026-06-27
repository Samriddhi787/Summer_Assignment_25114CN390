/*Write a program to Create employee management system. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct Employee
{
    char name[50];
    char dep[50];
    int age;
    int emp_id;
    float salary;
}s[100];
int main()
{
    int i,n,choice,search,num,flag=0,total=0,found;
    printf("Employee Management System\n");
    while(1)
    {
        printf("SELECT:\n(1) Add Details\n(2) Display Details\n(3) Search Employee\n(4) Exit\nOption Number:");
        scanf("%d", &choice);
        if (choice == 1)
        {
            flag = 1;
            printf("\nEnter the number of Employees:");
            scanf("%d", &n);
            getchar();
            if(total + n > 100)
            {
                printf("Cannot add more than 100 Employees.\n");
                continue;
            }
            num = total+1;
            for (i = total; i < total+n; i++)
            {
                printf("Employee %d\n", num);
                num++;
                printf("Enter the name of the Employee:");
                fgets(s[i].name, sizeof(s[i].name), stdin);
                s[i].name[strcspn(s[i].name, "\n")] = '\0';
                printf("Enter the age:");
                scanf("%d", &s[i].age);
                getchar();
                printf("Enter the department:");
                fgets(s[i].dep, sizeof(s[i].dep), stdin);
                s[i].dep[strcspn(s[i].dep, "\n")] = '\0';
                printf("Enter the Employee ID:");
                scanf("%d", &s[i].emp_id);
                printf("Enter the Salary:");
                scanf("%f", &s[i].salary);
                getchar();
            }
            total=total+n;
        }
        else if (choice == 2)
        {
            if(flag == 0)
            {
                printf("Add Details to Display");
            }
            else
            {
                num = 1;
                for (i = 0; i < total; i++)
                {
                    printf("\nEmployee %d\n", num);
                    num++;
                    printf("Name of the Employee:");
                    puts(s[i].name);
                    printf("Age:%d\n", s[i].age);
                    printf("Department");
                    puts(s[i].dep);
                    printf("Employee ID:%d\n", s[i].emp_id);
                    printf("Salary:%f %\n", s[i].salary);
                }
            }
        }
        else if (choice == 3)
        {
            if(flag==0)
            {
                printf("Add Details 1st");
            }
            else
            {
                printf("Enter the Employee ID of the employee to be searched:");
                scanf("%d", &search);
                found=0;
                for (i = 0; i < total; i++)
                {
                    if (search == s[i].emp_id)
                    {
                        printf("Name of the Employee:");
                        puts(s[i].name);
                        printf("Age:%d\n", s[i].age);
                        printf("Department:%d\n", s[i].dep);
                        printf("Employee ID:%d\n", s[i].emp_id);
                        printf("Salary:%f %\n", s[i].salary);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Employee not found");
                }
            }
        }
        else if(choice==4)
        {
            printf("System closed");
            break;
        }
        else
        {
            printf("Enter valid option\n");
        }
    }
    return 0;
}