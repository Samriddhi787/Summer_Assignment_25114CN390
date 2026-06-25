/*Write a program to Sort words by length. */
#include <stdio.h>
#include <string.h>
int main()
{
    char names[100][100], temp[100];
    int i,j,n;
    printf("Enter the number of names:");
    scanf("%d",&n);
    getchar();
    printf("Enter the names:\n");
    for(i=0;i<n;i++)
    {
        fgets(names[i],sizeof(names[i]),stdin);
        names[i][strcspn(names[i],"\n")]='\0';
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(strlen(names[j])>strlen(names[j+1]))
            {
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);
            }
        }
    }
    printf("Sorted length according to length are:\n");
    for(i=0;i<n;i++)
    {
        puts(names[i]);
    }
    return 0;
}