/*Write a program to Create marksheet generation system.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct Marks
{
    char name[50];
    int class;
    int roll_num;
    float eng_m;
    float hindi_m;
    float math_m;
    float science_m;
    float sst_m;
    float perc;
    char grade;
}s[100];
int main()
{
    int i,n,choice,search,num,flag=0,total=0,found;
    printf("Marksheet Generation System\n");
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
                printf("Enter the class:");
                scanf("%d", &s[i].class);
                printf("Enter the Roll number:");
                scanf("%d", &s[i].roll_num);
                printf("Enter the English marks:");
                scanf("%f", &s[i].eng_m);
                printf("Enter the Hindi marks:");
                scanf("%f", &s[i].hindi_m);
                printf("Enter the Math marks:");
                scanf("%f", &s[i].math_m);
                printf("Enter the Science marks:");
                scanf("%f", &s[i].science_m);
                printf("Enter the Social Studies marks:");
                scanf("%f", &s[i].sst_m);
                getchar();
                s[i].perc=(s[i].eng_m+s[i].hindi_m+s[i].math_m+s[i].science_m+s[i].sst_m)/5;
                if (s[i].perc >= 90)
                {
                    s[i].grade='A';
                }
                else if (s[i].perc >= 75)
                {
                    s[i].grade='B';
                }
                else if (s[i].perc >= 60)
                {
                    s[i].grade='C';
                }
                else if (s[i].perc >= 45)
                {
                    s[i].grade='D';
                }
                else
                {
                    s[i].grade='E';
                }
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
                    printf("Class:%d\n", s[i].class);
                    printf("Roll number:%d\n", s[i].roll_num);
                    printf("English marks:%f\n",s[i].eng_m);
                    printf("Hindi marks:%f\n",s[i].hindi_m);
                    printf("Maths marks:%f\n",s[i].math_m);
                    printf("Science marks:%f\n",s[i].science_m);
                    printf("Social studies marks:%f\n",s[i].sst_m);
                    printf("Percentage:%f %\n", s[i].perc);
                    printf("Grade:%c\n",s[i].grade);
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
                        printf("Class:%d\n", s[i].class);
                        printf("Roll number:%d\n", s[i].roll_num);
                        printf("English marks:%f\n", s[i].eng_m);
                        printf("Hindi marks:%f\n", s[i].hindi_m);
                        printf("Maths marks:%f\n", s[i].math_m);
                        printf("Science marks:%f\n", s[i].science_m);
                        printf("Social studies marks:%f\n", s[i].sst_m);
                        printf("Percentage:%f %\n", s[i].perc);
                        printf("Grade:%c\n",s[i].grade);
                        found = 1;
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