/*Write a program to Create student record system using arrays and strings.*/
#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    char course[50];
    float marks;
}s[100];

int main()
{
    int choice,total=0,i,roll,found;

    while(1)
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("Enter Roll Number: ");
                scanf("%d",&s[total].roll);

                getchar();

                printf("Enter Name: ");
                fgets(s[total].name,sizeof(s[total].name),stdin);
                s[total].name[strcspn(s[total].name,"\n")]='\0';

                printf("Enter Course: ");
                fgets(s[total].course,sizeof(s[total].course),stdin);
                s[total].course[strcspn(s[total].course,"\n")]='\0';

                printf("Enter Marks: ");
                scanf("%f",&s[total].marks);

                total++;

                printf("Student Added Successfully.\n");
                break;

            case 2:

                if(total==0)
                {
                    printf("No Records Found.\n");
                    break;
                }

                for(i=0;i<total;i++)
                {
                    printf("\nStudent %d\n",i+1);
                    printf("Roll : %d\n",s[i].roll);
                    printf("Name : %s\n",s[i].name);
                    printf("Course : %s\n",s[i].course);
                    printf("Marks : %.2f\n",s[i].marks);
                }

                break;

            case 3:

                found=0;

                printf("Enter Roll Number: ");
                scanf("%d",&roll);

                for(i=0;i<total;i++)
                {
                    if(s[i].roll==roll)
                    {
                        printf("Roll : %d\n",s[i].roll);
                        printf("Name : %s\n",s[i].name);
                        printf("Course : %s\n",s[i].course);
                        printf("Marks : %.2f\n",s[i].marks);
                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("Student Not Found.\n");

                break;

            case 4:

                found=0;

                printf("Enter Roll Number: ");
                scanf("%d",&roll);

                for(i=0;i<total;i++)
                {
                    if(s[i].roll==roll)
                    {
                        getchar();

                        printf("Enter New Name: ");
                        fgets(s[i].name,sizeof(s[i].name),stdin);
                        s[i].name[strcspn(s[i].name,"\n")]='\0';

                        printf("Enter New Course: ");
                        fgets(s[i].course,sizeof(s[i].course),stdin);
                        s[i].course[strcspn(s[i].course,"\n")]='\0';

                        printf("Enter New Marks: ");
                        scanf("%f",&s[i].marks);

                        printf("Record Updated.\n");
                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("Student Not Found.\n");

                break;

            case 5:

                found=0;

                printf("Enter Roll Number: ");
                scanf("%d",&roll);

                for(i=0;i<total;i++)
                {
                    if(s[i].roll==roll)
                    {
                        int j;

                        for(j=i;j<total-1;j++)
                        {
                            s[j]=s[j+1];
                        }

                        total--;
                        found=1;
                        printf("Record Deleted.\n");
                        break;
                    }
                }

                if(found==0)
                    printf("Student Not Found.\n");

                break;

            case 6:
                return 0;

            default:
                printf("Invalid Choice.\n");
        }
    }
}