/*Write a program to Create menu-driven array operations system. */
#include <stdio.h>
int main()
{
    int a[100],i,n=0,choice,ins,num,found=0;
    while(1)
    {
        printf("\nARRAY OPERATION SYSTEM.\n");
        printf("SELECT OPERATION:\n (1) Create Array\n(2) Display Array\n(3) Insert Element\n(4) Delete Element\n(5) Search Element\n(6) Update Element\n(7) Find Maximum\n(8) Find Minimum\n(9) Calculate Sum\n(10) Calculate Average\n(11) Sort Array\n(12) Reverse Array\n(13) Exit\n Option number:");
        scanf("%d",&choice);
        if(choice==1)//Create Array
        {
            printf("Enter number of elements:");
            scanf("%d",&n);
            printf("Enter the elements:");
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
        }
        else if(choice==2)//Display Array
        {
            printf("Elements: ");
            for(i=0;i<n;i++)
            {
                printf("%d ",a[i]);
            }
        }
        else if(choice==3)//Insert Element
        {
            printf("Enter the position of the element to be inserted:");
            scanf("%d",&ins);
            if(ins<0 || ins>n)
            {
                printf("Enter valid position\n");
            }
            else
            {
                printf("Enter the element to be inserted:");
                scanf("%d", &num);
                for (i = n; i >ins; i--)
                {
                    a[i] = a[i - 1];
                }
                a[ins]=num;
                n++;
                printf("Array after insertion:");
                for(i=0;i<n;i++)
                {
                    printf("%d ",a[i]);
                }
                printf("\n");
            }
        }
        else if(choice==4)//Delete Element
        {
            printf("Enter the position of the element to be deleted:");
            scanf("%d",&ins);
            if(ins<0 || ins>=n)
            {
                printf("Enter valid position\n");
            }
            else
            {
                for (i = ins; i < n-1; i++)
                {
                    a[i] = a[i + 1];
                }
                n--;
                printf("Array after deletion:");
                for(i=0;i<n;i++)
                {
                    printf("%d ",a[i]);
                }
                printf("\n");
            }
        }
        else if(choice==5)//Search Element
        {
                printf("Enter the element to be searched:");
                scanf("%d", &num);
                found=0;
                for (i = 0; i < n; i++)
                {
                    if(a[i]==num)
                    {
                        printf("Element found at index %d\n",i);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Element not found\n");
                }
        
        }
        else if(choice==6)//Update Element
        {
            int upd, new_ele;

            printf("Enter the index of the element to be updated: ");
            scanf("%d", &upd);

            if (upd < 0 || upd >= n)
            {
                printf("Invalid index.\n");
            }
            else
            {
                printf("Enter the new element: ");
                scanf("%d", &new_ele);

                a[upd] = new_ele;

                printf("Array after updation:\n");
                for (i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
        }
        else if(choice==7)//Find Maximum
        {
            int max;

            if (n == 0)
            {
                printf("Array is empty.\n");
            }
            else
            {
                max = a[0];

                for (i = 1; i < n; i++)
                {
                    if (a[i] > max)
                    {
                        max = a[i];
                    }
                }

                printf("Maximum element = %d\n", max);
            }
        }
        else if(choice==8)// Find Minimum
        {
            int min;

            if (n == 0)
            {
                printf("Array is empty.\n");
            }
            else
            {
                min = a[0];

                for (i = 1; i < n; i++)
                {
                    if (a[i] < min)
                    {
                        min = a[i];
                    }
                }

                printf("Minimum element = %d\n", min);
            }
        }
        else if(choice==9)//Calculate Sum
        {
            int sum = 0;

            if (n == 0)
            {
                printf("Array is empty.\n");
            }
            else
            {
                for (i = 0; i < n; i++)
                {
                    sum = sum + a[i];
                }

                printf("Sum of all elements = %d\n", sum);
            }
        }
        else if(choice==10)//Calculate Average
        {
            int sum = 0;
            float avg;

            if (n == 0)
            {
                printf("Array is empty.\n");
            }
            else
            {
                for (i = 0; i < n; i++)
                {
                    sum = sum + a[i];
                }

                avg = (float)sum / n;

                printf("Average of all elements = %.2f\n", avg);
            }
        }
        else if(choice==11)//Sort Array
        {
            int j,temp;

            if (n == 0)
            {
                printf("Array is empty.\n");
            }
            else
            {
                for (i = 0; i < n - 1; i++)
                {
                    for (j = 0; j < n - i - 1; j++)
                    {
                        if (a[j] > a[j + 1])
                        {
                            temp = a[j];
                            a[j] = a[j + 1];
                            a[j + 1] = temp;
                        }
                    }
                }

                printf("Array after sorting:\n");
                for (i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
        }
        else if(choice==12)//Reverse Array
        {
            int temp;

            if (n == 0)
            {
                printf("Array is empty.\n");
            }
            else
            {
                for (i = 0; i < n / 2; i++)
                {
                    temp = a[i];
                    a[i] = a[n - i - 1];
                    a[n - i - 1] = temp;
                }

                printf("Array after reversing:\n");
                for (i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
        }
        else if(choice==13)//exit
        {
            printf("System Exited\n");
            break;
        }
        else
        {
            printf("Invalid input\n");
        }
    }
    return 0;
}