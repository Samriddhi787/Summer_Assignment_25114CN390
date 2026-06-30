/*Write a program to Develop complete mini project using arrays, strings and functions.*/
#include <stdio.h>
#include <string.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
}s[100];

int total=0;

void addProduct()
{
    printf("Enter Product ID: ");
    scanf("%d",&s[total].id);

    getchar();

    printf("Enter Product Name: ");
    fgets(s[total].name,sizeof(s[total].name),stdin);
    s[total].name[strcspn(s[total].name,"\n")]='\0';

    printf("Enter Quantity: ");
    scanf("%d",&s[total].quantity);

    printf("Enter Price: ");
    scanf("%f",&s[total].price);

    total++;

    printf("Product Added Successfully.\n");
}

void displayProduct()
{
    int i;

    for(i=0;i<total;i++)
    {
        printf("\nProduct %d\n",i+1);
        printf("ID : %d\n",s[i].id);
        printf("Name : %s\n",s[i].name);
        printf("Quantity : %d\n",s[i].quantity);
        printf("Price : %.2f\n",s[i].price);
    }
}

void searchProduct()
{
    int id,i,found=0;

    printf("Enter Product ID: ");
    scanf("%d",&id);

    for(i=0;i<total;i++)
    {
        if(s[i].id==id)
        {
            printf("Name : %s\n",s[i].name);
            printf("Quantity : %d\n",s[i].quantity);
            printf("Price : %.2f\n",s[i].price);
            found=1;
            break;
        }
    }

    if(found==0)
        printf("Product Not Found.\n");
}

void deleteProduct()
{
    int id,i,j,found=0;

    printf("Enter Product ID: ");
    scanf("%d",&id);

    for(i=0;i<total;i++)
    {
        if(s[i].id==id)
        {
            for(j=i;j<total-1;j++)
            {
                s[j]=s[j+1];
            }

            total--;

            found=1;

            printf("Product Deleted.\n");
            break;
        }
    }

    if(found==0)
        printf("Product Not Found.\n");
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Delete Product\n");
        printf("5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addProduct();
                break;

            case 2:
                displayProduct();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                deleteProduct();
                break;

            case 5:
                return 0;

            default:
                printf("Invalid Choice.\n");
        }
    }
}