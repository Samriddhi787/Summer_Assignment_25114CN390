/*Write a program to Create library management system. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct library
{
    char title[50];
    char author[50];
    int quantity;
    int book_id;
}s[10000];
int main()
{
    int i,j,n,choice,search,num,flag=0,total=0,found,id;
    printf("Library Management System\n");
    while(1)
    {
        printf("SELECT:\n(1) Add Book Details\n(2) Display Book Details\n(3) Issue Book\n(4)Search Book\n(5)Return Book\n(6)Delete book\n(7) Exit\nOption Number:");
        scanf("%d", &choice);
        if (choice == 1)
        {
            flag = 1;
            printf("\nEnter the number of Books:");
            scanf("%d", &n);
            getchar();
            if(total + n > 10000)
            {
                printf("Cannot add more than 10000 Books.\n");
                continue;
            }
            num = total+1;
            for (i = total; i < total+n; i++)
            {
                printf("Book %d\n", num);
                num++;
                printf("Enter the title of the Book:");
                fgets(s[i].title, sizeof(s[i].title), stdin);
                s[i].title[strcspn(s[i].title, "\n")] = '\0';
                printf("Enter the book_id:");
                scanf("%d", &s[i].book_id);
                getchar();
                printf("Enter the author:");
                fgets(s[i].author, sizeof(s[i].author), stdin);
                s[i].author[strcspn(s[i].author, "\n")] = '\0';
                printf("Enter the quantity:");
                scanf("%d", &s[i].quantity);
                getchar();
            }
            total=total+n;
        }
        else if (choice == 2)
        {
            if(flag == 0)
            {
                printf("No books in the library\n");
            }
            else
            {
                num = 1;
                for (i = 0; i < total; i++)
                {
                    printf("\nBook %d\n", num);
                    num++;
                    printf("Title of the Book:");
                    puts(s[i].title);
                    printf("Book ID:%d\n", s[i].book_id);
                    printf("Author:");
                    puts(s[i].author);
                    printf("Quantity:%d\n", s[i].quantity);
                }
            }
        }
        else if (choice == 3)
        {
            if(flag==0)
            {
                printf("No books in the library\n");
            }
            else
            {
                printf("Enter the Book ID of the book to be issued:");
                scanf("%d", &id);
                found=0;
                for (i = 0; i < total; i++)
                {
                    if (id == s[i].book_id)
                    {
                        found=1;
                        if(s[i].quantity>0)
                        {
                            s[i].quantity--;
                            printf("Book issued successfully.\n");
                        }
                        else
                        {
                            printf("Book not available\n");
                        }
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Book not found\n");
                }
            }
        }
        else if(choice==4)
        {
            if(flag==0)
            {
                printf("No books in the library\n");
            }
            else
            {
                printf("Enter the Book ID of the book to be searched:");
                scanf("%d", &search);
                found=0;
                for (i = 0; i < total; i++)
                {
                    if (search == s[i].book_id)
                    {
                        printf("Title of the Book:");
                        puts(s[i].title);
                        printf("Book ID:%d\n", s[i].book_id);
                        printf("Author of the Book:");
                        puts(s[i].author);
                        printf("Quantity:%d \n", s[i].quantity);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Book not found\n");
                }
            }
            
        }
        else if(choice==5)
        {
            if(flag==0)
            {
                printf("No books in the library\n");
            }
            else
            {
                printf("Enter the Book ID of the book to be returned:");
                scanf("%d", &id);
                found=0;
                for (i = 0; i < total; i++)
                {
                    if (id == s[i].book_id)
                    {
                        found=1;
                        s[i].quantity++;
                        printf("Book returned successfully.\n");
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Book not found\n");
                }
            }
        }
        else if(choice==6)
        {
            if(flag==0)
            {
                printf("No books in the library\n");
            }
            else
            {
                printf("Enter the Book ID of the book to be deleted:");
                scanf("%d", &search);
                found=0;
                for (i = 0; i < total; i++)
                {
                    if (search == s[i].book_id)
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
                        printf("Book deleted successfully.\n");
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Book not found\n");
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