/*Write a program to Create inventory management system.*/
#include <stdio.h>
#include <string.h>

struct Inventory
{
    int id;
    char name[50];
    int quantity;
    float price;
}s[100];

int main()
{
    int choice,total=0,i,j,id,found;
    float value=0;

    while(1)
    {
        printf("\nINVENTORY MANAGEMENT SYSTEM\n");
        printf("(1) Add Product\n");
        printf("(2) Display Products\n");
        printf("(3) Search Product\n");
        printf("(4) Update Product\n");
        printf("(5) Delete Product\n");
        printf("(6) Calculate Total Inventory Value\n");
        printf("(7) Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);

        if(choice==1)//add
        {
            printf("Enter Product ID:");
            scanf("%d",&s[total].id);

            getchar();

            printf("Enter Product Name:");
            fgets(s[total].name,sizeof(s[total].name),stdin);
            s[total].name[strcspn(s[total].name,"\n")]='\0';

            printf("Enter Quantity:");
            scanf("%d",&s[total].quantity);

            printf("Enter Price:");
            scanf("%f",&s[total].price);

            total++;

            printf("Product added successfully.\n");
        }

        else if(choice==2)//display
        {
            if(total==0)
            {
                printf("No products available.\n");
            }
            else
            {
                printf("\nProduct List\n");

                for(i=0;i<total;i++)
                {
                    printf("\nProduct %d\n",i+1);
                    printf("ID : %d\n",s[i].id);
                    printf("Name : %s\n",s[i].name);
                    printf("Quantity : %d\n",s[i].quantity);
                    printf("Price : %.2f\n",s[i].price);
                }
            }
        }

        else if(choice==3)//search
        {
            printf("Enter Product ID:");
            scanf("%d",&id);

            found=0;

            for(i=0;i<total;i++)
            {
                if(s[i].id==id)
                {
                    printf("\nProduct Found\n");
                    printf("ID : %d\n",s[i].id);
                    printf("Name : %s\n",s[i].name);
                    printf("Quantity : %d\n",s[i].quantity);
                    printf("Price : %.2f\n",s[i].price);

                    found=1;
                    break;
                }
            }

            if(found==0)
            {
                printf("Product not found.\n");
            }
        }

        else if(choice==4)//update
        {
            printf("Enter Product ID:");
            scanf("%d",&id);

            found=0;

            for(i=0;i<total;i++)
            {
                if(s[i].id==id)
                {
                    getchar();

                    printf("Enter New Product Name:");
                    fgets(s[i].name,sizeof(s[i].name),stdin);
                    s[i].name[strcspn(s[i].name,"\n")]='\0';

                    printf("Enter New Quantity:");
                    scanf("%d",&s[i].quantity);

                    printf("Enter New Price:");
                    scanf("%f",&s[i].price);

                    printf("Product Updated Successfully.\n");

                    found=1;
                    break;
                }
            }

            if(found==0)
            {
                printf("Product not found.\n");
            }
        }

        else if(choice==5)//delete
        {
            printf("Enter Product ID:");
            scanf("%d",&id);

            found=0;

            for(i=0;i<total;i++)
            {
                if(s[i].id==id)
                {
                    for(j=i;j<total-1;j++)
                    {
                        s[j]=s[j+1];
                    }

                    total--;

                    printf("Product Deleted Successfully.\n");

                    found=1;
                    break;
                }
            }

            if(found==0)
            {
                printf("Product not found.\n");
            }
        }

        else if(choice==6)//calculate value
        {
            value=0;

            for(i=0;i<total;i++)
            {
                value=value+(s[i].quantity*s[i].price);
            }

            printf("Total Inventory Value = %.2f\n",value);
        }

        else if(choice==7)//exit
        {
            printf("System Closed.\n");
            break;
        }

        else
        {
            printf("Invalid Input.\n");
        }
    }

    return 0;
}