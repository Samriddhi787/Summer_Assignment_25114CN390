#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter the number you want multiplication table of:");
    scanf("%d",&num);
    for(i=0;i<=10;i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
}