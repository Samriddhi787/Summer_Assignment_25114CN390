/*Write a program to Create mini employee management system.*/
#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
}s[100];

int main()
{
    int choice,total=0,i,id,found;

    while(1)
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("Enter Employee ID: ");
                scanf("%d",&s[total].id);

                getchar();

                printf("Enter Employee Name: ");
                fgets(s[total].name,sizeof(s[total].name),stdin);
                s[total].name[strcspn(s[total].name,"\n")]='\0';

                printf("Enter Department: ");
                fgets(s[total].department,sizeof(s[total].department),stdin);
                s[total].department[strcspn(s[total].department,"\n")]='\0';

                printf("Enter Salary: ");
                scanf("%f",&s[total].salary);

                total++;
                printf("Employee Added.\n");
                break;

            case 2:

                for(i=0;i<total;i++)
                {
                    printf("\nEmployee %d\n",i+1);
                    printf("ID : %d\n",s[i].id);
                    printf("Name : %s\n",s[i].name);
                    printf("Department : %s\n",s[i].department);
                    printf("Salary : %.2f\n",s[i].salary);
                }

                break;

            case 3:

                found=0;

                printf("Enter Employee ID: ");
                scanf("%d",&id);

                for(i=0;i<total;i++)
                {
                    if(s[i].id==id)
                    {
                        printf("Name : %s\n",s[i].name);
                        printf("Department : %s\n",s[i].department);
                        printf("Salary : %.2f\n",s[i].salary);
                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("Employee Not Found.\n");

                break;

            case 4:

                found=0;

                printf("Enter Employee ID: ");
                scanf("%d",&id);

                for(i=0;i<total;i++)
                {
                    if(s[i].id==id)
                    {
                        printf("Enter New Salary: ");
                        scanf("%f",&s[i].salary);
                        printf("Salary Updated.\n");
                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("Employee Not Found.\n");

                break;

            case 5:
                return 0;

            default:
                printf("Invalid Choice.\n");
        }
    }
}