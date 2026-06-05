#include <stdio.h>
int main()
{
    int decimal,count=0;
    printf("Enter any decimal number:");
    scanf("%d",&decimal);
    while(decimal!=0)
    {
        if(decimal%2==1)
        {
            count++;
        }
        decimal=decimal/2;
    }
    printf("The set bits in the given number is:%d",count);
    return 0;
}