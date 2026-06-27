/*Write a program to Create student record management system.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct student
{
    char name[50];
    int age;
    int class;
    int roll_num;
    float perc;
}s[100];
int main()
{
    int i,n,choice,search,num,flag=0,total=0,found;
    printf("Student Management System\n");
    while(1)
    {
        printf("SELECT:\n(1) Add Details\n(2) Display Details\n(3) Search Student\n(4) Exit\nOption Number:");
        scanf("%d", &choice);
        if (choice == 1)
        {
            flag = 1;
            printf("\nEnter the number of Students:");
            scanf("%d", &n);
            getchar();
            if(total + n > 100)
            {
                printf("Cannot add more than 100 students.\n");
                continue;
            }
            num = total+1;
            for (i = total; i < total+n; i++)
            {
                printf("Student %d\n", num);
                num++;
                printf("Enter the name of the student:");
                fgets(s[i].name, sizeof(s[i].name), stdin);
                s[i].name[strcspn(s[i].name, "\n")] = '\0';
                printf("Enter the age:");
                scanf("%d", &s[i].age);
                printf("Enter the class:");
                scanf("%d", &s[i].class);
                printf("Enter the Roll number:");
                scanf("%d", &s[i].roll_num);
                printf("Enter the Percentage:");
                scanf("%f", &s[i].perc);
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
                    printf("\nStudent %d\n", num);
                    num++;
                    printf("Name of the student:");
                    puts(s[i].name);
                    printf("Age:%d\n", s[i].age);
                    printf("Class:%d\n", s[i].class);
                    printf("Roll number:%d\n", s[i].roll_num);
                    printf("Percentage:%f %\n", s[i].perc);
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
                printf("Enter the Roll number of the student to be searched:");
                scanf("%d", &search);
                found=0;
                for (i = 0; i < total; i++)
                {
                    if (search == s[i].roll_num)
                    {
                        printf("Name of the student:");
                        puts(s[i].name);
                        printf("Age:%d\n", s[i].age);
                        printf("Class:%d\n", s[i].class);
                        printf("Roll number:%d\n", s[i].roll_num);
                        printf("Percentage:%f %\n", s[i].perc);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Student not found");
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