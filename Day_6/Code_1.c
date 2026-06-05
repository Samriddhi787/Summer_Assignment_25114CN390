#include <stdio.h>
int main()
{
    int decimal,binary=0,dp=1,rem=0;
    printf("Enter any decimal number:");
    scanf("%d",&decimal);
    while(decimal!=0)
    {
        rem=decimal%2;
        binary=binary+(rem*dp);
        decimal=decimal/2;
        dp=dp*10;
    }
    printf("The binary conversion of the number is:%d",binary);
    return 0;
}