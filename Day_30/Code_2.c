/*Write a program to Create mini library system.*/
#include <stdio.h>
#include <string.h>

struct Library
{
    int id;
    char title[50];
    char author[50];
}s[100];

int main()
{
    int choice,total=0,i,id,found;

    while(1)
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("Enter Book ID: ");
                scanf("%d",&s[total].id);

                getchar();

                printf("Enter Book Title: ");
                fgets(s[total].title,sizeof(s[total].title),stdin);
                s[total].title[strcspn(s[total].title,"\n")]='\0';

                printf("Enter Author Name: ");
                fgets(s[total].author,sizeof(s[total].author),stdin);
                s[total].author[strcspn(s[total].author,"\n")]='\0';

                total++;
                printf("Book Added Successfully.\n");
                break;

            case 2:

                for(i=0;i<total;i++)
                {
                    printf("\nBook %d\n",i+1);
                    printf("Book ID : %d\n",s[i].id);
                    printf("Title : %s\n",s[i].title);
                    printf("Author : %s\n",s[i].author);
                }

                break;

            case 3:

                found=0;

                printf("Enter Book ID: ");
                scanf("%d",&id);

                for(i=0;i<total;i++)
                {
                    if(s[i].id==id)
                    {
                        printf("Title : %s\n",s[i].title);
                        printf("Author : %s\n",s[i].author);
                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("Book Not Found.\n");

                break;

            case 4:

                found=0;

                printf("Enter Book ID: ");
                scanf("%d",&id);

                for(i=0;i<total;i++)
                {
                    if(s[i].id==id)
                    {
                        int j;

                        for(j=i;j<total-1;j++)
                            s[j]=s[j+1];

                        total--;
                        found=1;
                        printf("Book Deleted.\n");
                        break;
                    }
                }

                if(found==0)
                    printf("Book Not Found.\n");

                break;

            case 5:
                return 0;

            default:
                printf("Invalid Choice.\n");
        }
    }
}